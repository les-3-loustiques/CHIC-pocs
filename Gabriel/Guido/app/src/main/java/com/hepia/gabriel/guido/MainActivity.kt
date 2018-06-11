/**
 * coucou
 */

package com.hepia.gabriel.guido

import android.Manifest
import android.annotation.TargetApi
import android.bluetooth.*
import android.support.v7.app.AppCompatActivity
import android.os.Bundle
import android.widget.Toast
import android.content.Intent
import android.util.Log
import java.lang.Thread.sleep
import android.bluetooth.le.*
import android.content.pm.PackageManager
import android.os.Build
import android.os.Handler
import android.support.v4.app.ActivityCompat
import android.support.v4.content.ContextCompat
import android.view.View
import android.widget.TextView
import android.view.ViewGroup
import android.widget.LinearLayout
import kotlinx.android.synthetic.main.activity_main.*
//import android.view.InputDevice.getDevice
//import com.idevicesinc.sweetblue.BleManager
import android.content.Context
import android.support.v7.widget.LinearLayoutManager
import android.support.v7.widget.RecyclerView
import android.view.LayoutInflater
import kotlinx.android.synthetic.main.recycle.view.*
import android.bluetooth.BluetoothGattService
import android.bluetooth.BluetoothGatt
import android.net.Uri
import android.support.v4.app.FragmentPagerAdapter
import android.support.v4.view.ViewPager
import android.util.TypedValue


const  val REQUEST_ENABLE_BT = 1

class MainActivity : AppCompatActivity(),
        Login_fragment.OnFragmentInteractionListener,
        GuidoConnexion.OnFragmentInteractionListener{

    private lateinit var adapterViewPager : FragmentPagerAdapter

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        // Set logo on action bar
        supportActionBar?.setLogo(R.mipmap.ic_launcher)
        supportActionBar?.setDisplayUseLogoEnabled(true)
        supportActionBar?.setDisplayShowHomeEnabled(true)

        adapterViewPager = CustomFragmentPagerAdapter(supportFragmentManager, this)
        pager.adapter = adapterViewPager
        pager_header.setTextSize(TypedValue.COMPLEX_UNIT_DIP, 20f)
        pager_header.drawFullUnderline = false
        pager_header.setNonPrimaryAlpha(0.2f)
        pager_header.setTextColor(ContextCompat.getColor(baseContext, R.color.colorBluePastel))
        pager_header.tabIndicatorColor = ContextCompat.getColor(baseContext, R.color.colorBluePastel)
    }

    override fun onFragmentInteraction(uri : Uri){

    }

/*
    private lateinit var mBluetoothAdapter: BluetoothAdapter
    private lateinit var mLEScanner: BluetoothLeScanner
    private var mScanning: Boolean = false
    private val mHandler: Handler = Handler()
    private lateinit var settings: ScanSettings
    private lateinit var filters: List<ScanFilter>

    private val mLeDevices: ArrayList<BluetoothDevice> = ArrayList()
    private lateinit var recycleView : RecyclerView
    private val mAdapter = MyAdapter(mLeDevices)
    private lateinit var mGatt: BluetoothGatt

    // Stops scanning after 10 seconds.
    private val SCAN_PERIOD: Long = 10000




    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)


        //recycleView = resultLeScan

        //définit l'agencement des cellules, ici de façon verticale, comme une ListView
        recycleView.layoutManager = LinearLayoutManager(this)

        //puis créer un MyAdapter, lui fournir notre liste de villes.
        //cet adapter servira à remplir notre recyclerview
        recycleView.adapter = mAdapter

        // if device doesn't have Bluetooth we quit
        if (!packageManager.hasSystemFeature(PackageManager.FEATURE_BLUETOOTH)) {
            Toast.makeText(this, R.string.bNotSupported, Toast.LENGTH_LONG).show()

        }
        // if device doesn't have BLE we quit, we can only work with BLE
        if (!packageManager.hasSystemFeature(PackageManager.FEATURE_BLUETOOTH_LE)) {
            Toast.makeText(this, R.string.bleNotSupported, Toast.LENGTH_LONG).show()

        }

        // Initializes Bluetooth adapter.
        val mbluetoothManager : BluetoothManager = getSystemService(Context.BLUETOOTH_SERVICE) as BluetoothManager
        mBluetoothAdapter = mbluetoothManager.adapter

        if(checkBLEPermissions() != 0) quit()
        if(checkBLE() != 0) quit()


        val pairedDevices = mBluetoothAdapter.bondedDevices

        if (pairedDevices.size > 0) {
            // There are paired devices. Get the name and address of each paired device.
            for (device in pairedDevices) {
                mLeDevices.add(device)
            }
        }
    }

    override fun onResume() {
        super.onResume()

        if (!mBluetoothAdapter.isEnabled) {
            val enableBtIntent = Intent(BluetoothAdapter.ACTION_REQUEST_ENABLE);
            startActivityForResult(enableBtIntent, REQUEST_ENABLE_BT);
        } else {
            if (Build.VERSION.SDK_INT >= 21) {
                mLEScanner = mBluetoothAdapter.bluetoothLeScanner
                settings = ScanSettings.Builder().setScanMode(ScanSettings.SCAN_MODE_LOW_LATENCY).build()
                filters = ArrayList()
            }
        }

        lateinit var m : BluetoothDevice

        mLeDevices.forEach { i ->
            if(i.name == "MONITOR BLUETOOTH")
                Toast.makeText(this, "coucouc",Toast.LENGTH_SHORT).show()
            m = i
        }
        connectToDevice(m)

    }

    override fun onPause() {
        super.onPause()
        if (mBluetoothAdapter.isEnabled) {
            scanLeDevice(false)
        }
    }

    fun scanBluetooth(view: View){
        if(mScanning){
            scanLeDevice(false)
        }
        else{
            scanLeDevice(true)
        }
    }


    private fun scanLeDevice(enable: Boolean ) {
        if (enable) {
            // Stops scanning after a pre-defined scan period.
            mHandler.postDelayed({
                scanLeDevice(false)
            }, SCAN_PERIOD )
            mScanning = true
            mLeDevices.clear()
            if(Build.VERSION.SDK_INT < 21){
                Log.d("moi", " start <21")
               mBluetoothAdapter.startLeScan(mLeScanCallback)
            } else{
                Log.d("moi", " start >21")
                mLEScanner.startScan(filters, settings, mScanCallback)
            }
            bScanBluetooth.text = getString(R.string.stopScanBluetooth)
            tScanBluetooth.text = getString(R.string.tstopScanBluetooth)
        } else {
            mScanning = false
            if(Build.VERSION.SDK_INT < 21){
                Log.d("moi", " stop <21")
                mBluetoothAdapter.stopLeScan(mLeScanCallback)
            } else{
                Log.d("moi", " stop >21")
                mLEScanner.stopScan(mScanCallback)
            }
            bScanBluetooth.text = getString(R.string.startScanBluetooth)
            tScanBluetooth.text = getString(R.string.tstartScanBluetooth)
        }
    }

    fun connectToDevice(device: BluetoothDevice) {
        mGatt = device.connectGatt(this, false, gattCallback)
        scanLeDevice(false)
    }



    private val gattCallback = object : BluetoothGattCallback(){

        override fun onConnectionStateChange(gatt : BluetoothGatt, status : Int, newState : Int) {
            Log.d("moi", "onConnectionStateChange Status: $status")
            when (newState) {
                BluetoothProfile.STATE_CONNECTED -> {
                    Log.d("moi", "gattCallback STATE_CONNECTED")
                    gatt.discoverServices()
                }
                BluetoothProfile.STATE_DISCONNECTED -> {
                    Log.d(" moi", "gattCallback STATE_DISCONNECTED")
                }
                else -> {
                    Log.d("moi", "gattCallback STATE_OTHER")
                }
            }
        }

        override fun onServicesDiscovered(gatt: BluetoothGatt, status: Int) {
            val services = gatt.services
            Log.d("moi", "onServicesDiscovered $services")
            gatt.readCharacteristic(services[1].characteristics[0])
        }


        override fun onCharacteristicRead(gatt: BluetoothGatt, characteristic : BluetoothGattCharacteristic, status : Int) {
            Log.d("moi", "onCharacteristicRead $characteristic")
            gatt.disconnect()
        }
    }



    // Device scan callback. for API < 21
    private var mLeScanCallback = BluetoothAdapter.LeScanCallback { device, rssi, scanRecord ->
        runOnUiThread {
            if(!mLeDevices.contains(device)){
                mLeDevices.add(device)
                mAdapter.notifyDataSetChanged()
            }
        }
    }

    // Device scan callback. for API > 21
    @TargetApi(21)
    private val mScanCallback = object : ScanCallback() {

        override fun onScanResult(callbackType: Int, result: ScanResult) {
            Log.d("callbackType", callbackType.toString())
            Log.d("result", result.toString())
            if(!mLeDevices.contains(result.device)) {
                mLeDevices.add(result.device)
                mAdapter.notifyDataSetChanged()
            }
        }

        override fun onBatchScanResults(results: List<ScanResult>) {
            for (sr in results) {
                Log.i("ScanResult", sr.toString())
            }
        }

        override fun onScanFailed(errorCode: Int) {
            Log.e("Scan Failed", "Error Code: $errorCode")
        }
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
     * \brief Check for localizations permission for Bluetooth
     */
    fun checkBLEPermissions() : Int{
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
            }
        }
        return if(ContextCompat.checkSelfPermission(this, Manifest.permission.ACCESS_COARSE_LOCATION)
                != PackageManager.PERMISSION_GRANTED) -1 else 0
    }

    fun checkBLE() : Int{

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

        return if(!mBluetoothAdapter.isEnabled) -1 else 0
    }

}


class MyViewHolder //itemView est la vue correspondante à 1 cellule
(itemView: View) : RecyclerView.ViewHolder(itemView) {

    init {
        itemView.setOnClickListener { v ->
            adapterPosition
        }
    }

    private lateinit var dev: BluetoothDevice
    //puis ajouter une fonction pour remplir la cellule en fonction d'un MyObject
    fun bind(device: BluetoothDevice) {
        dev = device
        itemView.text_name.text = device.name
        itemView.text_address.text = device.address
    }
}

class MyAdapter(val list : List<BluetoothDevice>) : RecyclerView.Adapter<MyViewHolder>(){

    //cette fonction permet de créer les viewHolder
    //et par la même indiquer la vue à inflater (à partir des layout xml)
    override fun onCreateViewHolder(viewGroup : ViewGroup, itemType : Int) : MyViewHolder {

        val view : View = LayoutInflater.from(viewGroup.context).inflate(R.layout.recycle,viewGroup,false)
        return MyViewHolder(view)
    }

    //c'est ici que nous allons remplir notre cellule avec le texte/image de chaque MyObjects
    override fun onBindViewHolder(myViewHolder: MyViewHolder, position: Int) {
        val bluetoothDevice = list[position]
        myViewHolder.bind(bluetoothDevice)
    }

    override fun getItemCount(): Int {
        return list.size
    }*/
}