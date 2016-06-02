package com.example.cmake;

import android.app.Activity;
import android.os.Bundle;
import android.widget.TextView;

public class MainActivity extends Activity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        TextView tv = new TextView(this);
        tv.setText(getString());
        setContentView(tv);
    }

    public native String getString();

    static {
        System.loadLibrary("sample");
    }
}
