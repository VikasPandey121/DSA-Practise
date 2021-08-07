package com.progection.learnkotlin

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.view.View
import android.widget.Button
import android.widget.Toast
import kotlinx.android.synthetic.main.activity_main.*


class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        btnresult.setOnClickListener(View.OnClickListener {
            val result = edt1.text.toString().toInt() + edt2.text.toString().toInt()
            btnresult.text = result.toString()

        })
    }
}
