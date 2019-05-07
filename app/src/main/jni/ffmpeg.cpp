//
// Created by 胡泽东 on 2019-04-29.
//
#include <com_example_myapplication_NDKHelper.h>

#include <stdio.h>
#include <android/log.h>
#include <android/bitmap.h>

#define LOG_TAG "huzedong"
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)

extern "C" {

#include "prebuilt/includes/arm64-v8a/libavcodec/avcodec.h"
#include "prebuilt/includes/arm64-v8a/libavformat/avformat.h"
#include "prebuilt/includes/arm64-v8a/libavfilter/avfilter.h"

JNIEXPORT jstring JNICALL Java_com_example_myapplication_NDKHelper_initndkhelper(JNIEnv *env, jclass clazz)
{
//    char info[10000] = {0};
    av_register_all();
//    sprintf(info, "%s\n", avcodec_configuration());
//    //LOGE("%s", info);
//    return (*env)->NewStringUTF(env, info);
      avcodec_version();
      avformat_version();

      LOGE(".............this is native log.............");
      return env->NewStringUTF("ddddd");
}
}