/**
 * coucou
 */

package com.hepia.gabriel.guido

import android.bluetooth.BluetoothAdapter
import android.content.Context
import android.content.pm.PackageManager
import android.support.v7.app.AppCompatActivity
import android.os.Bundle
import android.widget.Toast
import android.content.Intent
import android.util.Log
import java.lang.Thread.sleep
import android.bluetooth.BluetoothDevice
import android.content.IntentFilter
import android.content.BroadcastReceiver
import android.view.View
import kotlinx.android.synthetic.main.activity_main.*

const val REQUEST_ENABLE_BT = 1

class MainActivity : AppCompatActivity() {

    private lateinit var mBluetoothAdapter: BluetoothAdapter

    private val mReceiver: BroadcastReceiver = object : BroadcastReceiver() {
        override fun onReceive(context: Context, intent: Intent) {
            Log.d("moi", "into intent")
            val action = intent.action
            when(action){
                BluetoothAdapter.ACTION_DISCOVERY_STARTED ->{
                    bScanBluetooth.text = getString(R.string.stopScanBluetooth)
                    tScanBluetooth.text = getString(R.string.tstopScanBluetooth)
                }
                BluetoothAdapter.ACTION_DISCOVERY_FINISHED ->{
                    bScanBluetooth.text = getString(R.string.startScanBluetooth)
                    tScanBluetooth.text = getString(R.string.tstartScanBluetooth)
                }
                BluetoothDevice.ACTION_FOUND ->{
                    // Discovery has found a device. Get the BluetoothDevice
                    // object and its info from the Intent.
                    val device = intent.getParcelableExtra<BluetoothDevice>(BluetoothDevice.EXTRA_DEVICE)
                    val deviceName = device.name
                    val deviceHardwareAddress = device.address // MAC address
                    Log.d("moi", " name device : $deviceName")
                    Log.d("moi", " name hardware : $deviceHardwareAddress")
                }
            }
        }
    }



    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        // quit if device doesn't have Bluetooth we quit
        if (!packageManager.hasSystemFeature(PackageManager.FEATURE_BLUETOOTH)) {
            Toast.makeText(this, R.string.b_not_supported, Toast.LENGTH_LONG).show()
            quit()
        }
        // if device doesn't have BLE we deactivate BLE features
        if (!packageManager.hasSystemFeature(PackageManager.FEATURE_BLUETOOTH_LE)) {
            Toast.makeText(this, R.string.ble_not_supported, Toast.LENGTH_LONG).show()
            // deactivate BLE features
        }

        // Initializes Bluetooth adapter.
        mBluetoothAdapter = BluetoothAdapter.getDefaultAdapter()

        // Ensures Bluetooth is enabled. If not,
        // displays a dialog requesting user permission to enable Bluetooth.
        if (!mBluetoothAdapter.isEnabled) {
            val enableBtIntent = Intent(BluetoothAdapter.ACTION_REQUEST_ENABLE)
            startActivityForResult(enableBtIntent, REQUEST_ENABLE_BT)
        }

        // Discovery is run as system and is not an activity so its preferable to cancel any discovery
        if(mBluetoothAdapter.isDiscovering) {
            mBluetoothAdapter.cancelDiscovery()
        }

        var filter = IntentFilter(BluetoothAdapter.ACTION_DISCOVERY_STARTED)
        filter.addAction(BluetoothAdapter.ACTION_DISCOVERY_FINISHED)
        filter.addAction(BluetoothDevice.ACTION_FOUND)
        registerReceiver(mReceiver, filter)
        Log.d("moi", "blabla")
    }

    /**
     * \func quit()
     * \brief Quit the program properly
     */
    fun quit(){
        sleep(5000)
        finish()
    }

    /**
     * \func scanBluetooth( view: View)
     * \brief Start/stop the scan of bluetooth devices available and change text of button
     * \param view view
     */
    fun scanBluetooth( view : View ){
        if(mBluetoothAdapter.isDiscovering){
            mBluetoothAdapter.cancelDiscovery()
        }else{
            mBluetoothAdapter.startDiscovery()
        }
    }

}
