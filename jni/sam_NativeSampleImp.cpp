#include <stdio.h>
#include "sam_NativeSample.h"

JNIEXPORT void JNICALL Java_sam_NativeSample_sayHello(JNIEnv * env, jobject obj) {
	printf("Say hello from native");
}

JNIEXPORT void JNICALL Java_sam_NativeSample_sendANum(JNIEnv * env, jobject obj, jint arg) {
	printf("A number is received %d", arg);
}

JNIEXPORT void JNICALL Java_sam_NativeSample_sendAString(JNIEnv * env, jobject obj, jstring arg) {
	printf("A string is received %s", env->GetStringUTFChars(arg, 0));
}

JNIEXPORT jint JNICALL Java_sam_NativeSample_getANum(JNIEnv * env, jobject obj) {
	return 10;
}

JNIEXPORT jstring JNICALL Java_sam_NativeSample_getAString(JNIEnv * env, jobject obj) {
	return env->NewStringUTF("Hello with jstring");
}