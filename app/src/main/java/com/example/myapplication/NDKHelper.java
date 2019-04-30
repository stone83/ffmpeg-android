package com.example.myapplication;

public class NDKHelper {
    static {
        System.loadLibrary("hello");
    }
    public static native String initndkhelper();
}
