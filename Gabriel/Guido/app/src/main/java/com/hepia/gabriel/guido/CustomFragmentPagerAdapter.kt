package com.hepia.gabriel.guido

import android.content.Context
import android.support.v4.app.Fragment
import android.support.v4.app.FragmentManager
import android.support.v4.app.FragmentPagerAdapter

class CustomFragmentPagerAdapter ( fragmentManager: FragmentManager, context : Context) : FragmentPagerAdapter(fragmentManager){
    val list_tab_name  = listOf(context.resources.getString(R.string.User_tab_title),
            context.resources.getString(R.string.Home_tab_title),
            context.resources.getString(R.string.Exercise_tab_title),
            context.resources.getString(R.string.BLE_tab_title))
    private val NUMITEMS = 4

    // Returns total number of pages
    override fun getCount(): Int {
        return NUMITEMS
    }

    // Returns the fragment to display for that page
    override fun getItem(position: Int): Fragment? {
        when (position) {
            0 // Fragment # 0 - This will show FirstFragment
            -> return Login_fragment.newInstance("caca", "Page # 1")
            1 // Fragment # 0 - This will show FirstFragment different title
            -> return GuidoConnexion.newInstance("pipi", "Page # 2")
            2 // Fragment # 0 - This will show FirstFragment different title
            -> return GuidoConnexion.newInstance("pipi", "Page # 3")
            3 // Fragment # 0 - This will show FirstFragment different title
            -> return GuidoConnexion.newInstance("pipi", "Page # 4")
            else -> return null
        }
    }

    // Returns the page title for the top indicator
    override fun getPageTitle(position: Int): CharSequence? {
        return list_tab_name[position]
    }

}