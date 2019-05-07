//
// Created by 胡泽东 on 2019-04-29.
//
#include <com_example_myapplication_NDKHelper.h>

#include <stdio.h>

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


      return env->NewStringUTF("ddddd");
}
}