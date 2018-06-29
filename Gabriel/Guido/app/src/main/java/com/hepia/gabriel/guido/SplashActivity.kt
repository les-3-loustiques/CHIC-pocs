package com.hepia.gabriel.guido

import android.support.v7.app.AppCompatActivity
import android.os.Bundle
import android.content.Intent


/**
 * Class SplashActivity with custom theme
 * Display the Guido background and start the MainActivity
 */
class SplashActivity : AppCompatActivity() {

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        // Creation of intent of Main
        val intent = Intent(this, MainActivity::class.java)
        // Start of MainActivity
        startActivity(intent)
        finish()
    }
}
