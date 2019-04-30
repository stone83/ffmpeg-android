//
// Created by 胡泽东 on 2019-04-29.
//
#include <com_example_myapplication_NDKHelper.h>

#include <stdio.h>
#include "libavcodec/avcodec.h"
#include "libavformat/avformat.h"
#include "libavfilter/avfilter.h"

extern "C" {
JNIEXPORT jstring JNICALL Java_com_example_myapplication_NDKHelper_initndkhelper(JNIEnv *env, jclass clazz)
{
//    char info[10000] = {0};
//    av_register_all();
//    sprintf(info, "%s\n", avcodec_configuration());
//    //LOGE("%s", info);
//    return (*env)->NewStringUTF(env, info);
//      avcodec_version();

      return env->NewStringUTF("ddddd");
}
}