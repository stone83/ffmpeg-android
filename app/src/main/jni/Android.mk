LOCAL_PATH := $(call my-dir)
# FFmpeg library
include $(CLEAR_VARS)
LOCAL_MODULE := avcodec
LOCAL_SRC_FILES := prebuilt/libs/$(TARGET_ARCH_ABI)/libavcodec.so
#LOCAL_SRC_FILES := $(so_path)/libavcodec.so
include $(PREBUILT_SHARED_LIBRARY)
include $(CLEAR_VARS)
LOCAL_MODULE := avfilter
LOCAL_SRC_FILES := prebuilt/libs/$(TARGET_ARCH_ABI)/libavfilter.so
include $(PREBUILT_SHARED_LIBRARY)
include $(CLEAR_VARS)
LOCAL_MODULE := avformat
LOCAL_SRC_FILES := prebuilt/libs/$(TARGET_ARCH_ABI)/libavformat.so
include $(PREBUILT_SHARED_LIBRARY)
include $(CLEAR_VARS)
LOCAL_MODULE := avutil
LOCAL_SRC_FILES := prebuilt/libs/$(TARGET_ARCH_ABI)/libavutil.so
include $(PREBUILT_SHARED_LIBRARY)
include $(CLEAR_VARS)
LOCAL_MODULE := swresample
LOCAL_SRC_FILES := prebuilt/libs/$(TARGET_ARCH_ABI)/libswresample.so
include $(PREBUILT_SHARED_LIBRARY)
include $(CLEAR_VARS)
LOCAL_MODULE := swscale
LOCAL_SRC_FILES := prebuilt/libs/$(TARGET_ARCH_ABI)/libswscale.so
include $(PREBUILT_SHARED_LIBRARY)
# Program
include $(CLEAR_VARS)
LOCAL_MODULE := ffmpeg
LOCAL_SRC_FILES := ffmpeg.cpp
LOCAL_C_INCLUDES += prebuilt/includes/$(TARGET_ARCH_ABI)
LOCAL_LDLIBS := -llog -lz
LOCAL_SHARED_LIBRARIES := avcodec avfilter avformat avutil swresample swscale
include $(BUILD_SHARED_LIBRARY)