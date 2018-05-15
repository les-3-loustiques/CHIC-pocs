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
import android.bluetooth.BluetoothManager
import android.support.v4.content.ContextCompat
import android.Manifest
import android.support.v4.app.ActivityCompat
import android.widget.TextView
import android.view.ViewGroup
import android.widget.LinearLayout


const val REQUEST_ENABLE_BT = 1

class MainActivity : AppCompatActivity() {

    private lateinit var mBluetoothAdapter: BluetoothAdapter
    private lateinit var mBluetoothManager: BluetoothManager

    private val mReceiver: BroadcastReceiver = object : BroadcastReceiver() {
        override fun onReceive(context: Context, intent: Intent) {
            Log.d("moi", intent.action)
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

                    // create a new textfield
                    var newText = TextView(this@MainActivity)
                    newText.layoutParams = LinearLayout.LayoutParams(ViewGroup.LayoutParams.WRAP_CONTENT, ViewGroup.LayoutParams.WRAP_CONTENT)
                    newText.text = "name device: ${device.name}\n" +
                            "name hardware : ${device.address}\n\n"

                    ll_mainlayout.addView(newText)

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
        // mBluetoothManager =  getSystemService(Context.BLUETOOTH_SERVICE) as BluetoothManager
        // mBluetoothAdapter = mBluetoothManager.adapter
        mBluetoothAdapter = BluetoothAdapter.getDefaultAdapter()

        // check for Bluetooth location permission. if not, ask. otherwise app doesn't work
        if (ContextCompat.checkSelfPermission(this, Manifest.permission.ACCESS_COARSE_LOCATION)
                != PackageManager.PERMISSION_GRANTED) {

            // Permission is not granted
            // Should we show an explanation?
            if (ActivityCompat.shouldShowRequestPermissionRationale(this,
                            Manifest.permission.ACCESS_COARSE_LOCATION)) {
                // Show an explanation to the user *asynchronously* -- don't block
                // this thread waiting for the user's response! After the user
                // sees the explanation, try again to request the permission.
            } else {
                // No explanation needed, we can request the permission.
                ActivityCompat.requestPermissions(this,
                        arrayOf(Manifest.permission.ACCESS_COARSE_LOCATION),1)

                // MY_PERMISSIONS_REQUEST_READ_CONTACTS is an
                // app-defined int constant. The callback method gets the
                // result of the request.
            }

        }

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

        val pairedDevices = mBluetoothAdapter.bondedDevices

        if (pairedDevices.size > 0) {
            // There are paired devices. Get the name and address of each paired device.
            for (device in pairedDevices) {

                // create a new textfield
                var newText = TextView(this@MainActivity)
                newText.layoutParams = LinearLayout.LayoutParams(ViewGroup.LayoutParams.WRAP_CONTENT, ViewGroup.LayoutParams.WRAP_CONTENT)
                newText.text = "name device: ${device.name}\n" +
                        "name hardware : ${device.address}\n" +
                        "device uuid : ${device.uuids}\n\n"

                ll_mainlayout.addView(newText)
            }
        }

        var filter = IntentFilter(BluetoothAdapter.ACTION_DISCOVERY_STARTED)
        filter.addAction(BluetoothAdapter.ACTION_DISCOVERY_FINISHED)
        filter.addAction(BluetoothDevice.ACTION_FOUND)
        registerReceiver(mReceiver, filter)
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
