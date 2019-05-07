package com.example.myapplication;

public class NDKHelper {
    static {
        System.loadLibrary("avcodec");
//        System.loadLibrary("avdevice");
        System.loadLibrary("avfilter");
        System.loadLibrary("avformat");
        System.loadLibrary("avresample");
        System.loadLibrary("avutil");
        System.loadLibrary("swresample");
        System.loadLibrary("swscale");
        System.loadLibrary("ffmpeg");
    }
    public static native String initndkhelper();
}
