/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_varel_gereon_RF24_RF24_JNI */

#ifndef _Included_com_varel_gereon_RF24_RF24_JNI
#define _Included_com_varel_gereon_RF24_RF24_JNI
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_varel_gereon_RF24_RF24_JNI
 * Method:    createObject
 * Signature: (SSJ)J
 */
JNIEXPORT jlong JNICALL Java_com_varel_gereon_RF24_RF24_1JNI_createObject
  (JNIEnv *, jclass, jshort, jshort, jlong);

/*
 * Class:     com_varel_gereon_RF24_RF24_JNI
 * Method:    deleteObject
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_varel_gereon_RF24_RF24_1JNI_deleteObject
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_varel_gereon_RF24_RF24_JNI
 * Method:    begin
 * Signature: (JLcom/varel/gereon/RF24/RF24;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_varel_gereon_RF24_RF24_1JNI_begin
  (JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     com_varel_gereon_RF24_RF24_JNI
 * Method:    printDetails
 * Signature: (JLcom/varel/gereon/RF24/RF24;)V
 */
JNIEXPORT void JNICALL Java_com_varel_gereon_RF24_RF24_1JNI_printDetails
  (JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     com_varel_gereon_RF24_RF24_JNI
 * Method:    setRetries
 * Signature: (JLcom/varel/gereon/RF24/RF24;SS)V
 */
JNIEXPORT void JNICALL Java_com_varel_gereon_RF24_RF24_1JNI_setRetries
  (JNIEnv *, jclass, jlong, jobject, jshort, jshort);

/*
 * Class:     com_varel_gereon_RF24_RF24_JNI
 * Method:    openWritingPipe
 * Signature: (JLcom/varel/gereon/RF24/RF24;[B)V
 */
JNIEXPORT void JNICALL Java_com_varel_gereon_RF24_RF24_1JNI_openWritingPipe
  (JNIEnv *, jclass, jlong, jobject, jbyteArray);

/*
 * Class:     com_varel_gereon_RF24_RF24_JNI
 * Method:    openReadingPipe
 * Signature: (JLcom/varel/gereon/RF24/RF24;S[B)V
 */
JNIEXPORT void JNICALL Java_com_varel_gereon_RF24_RF24_1JNI_openReadingPipe
  (JNIEnv *, jclass, jlong, jobject, jshort, jbyteArray);

/*
 * Class:     com_varel_gereon_RF24_RF24_JNI
 * Method:    startListening
 * Signature: (JLcom/varel/gereon/RF24/RF24;)V
 */
JNIEXPORT void JNICALL Java_com_varel_gereon_RF24_RF24_1JNI_startListening
  (JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     com_varel_gereon_RF24_RF24_JNI
 * Method:    stopListening
 * Signature: (JLcom/varel/gereon/RF24/RF24;)V
 */
JNIEXPORT void JNICALL Java_com_varel_gereon_RF24_RF24_1JNI_stopListening
  (JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     com_varel_gereon_RF24_RF24_JNI
 * Method:    write
 * Signature: (JLcom/varel/gereon/RF24/RF24;[BS)Z
 */
JNIEXPORT jboolean JNICALL Java_com_varel_gereon_RF24_RF24_1JNI_write
  (JNIEnv *, jclass, jlong, jobject, jbyteArray, jshort);

/*
 * Class:     com_varel_gereon_RF24_RF24_JNI
 * Method:    writeWithRead
 * Signature: (JLcom/varel/gereon/RF24/RF24;[BS[BS)Z
 */
JNIEXPORT jboolean JNICALL Java_com_varel_gereon_RF24_RF24_1JNI_writeWithRead
  (JNIEnv *, jclass, jlong, jobject, jbyteArray, jshort, jbyteArray, jshort);

/*
 * Class:     com_varel_gereon_RF24_RF24_JNI
 * Method:    available
 * Signature: (JLcom/varel/gereon/RF24/RF24;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_varel_gereon_RF24_RF24_1JNI_available
  (JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     com_varel_gereon_RF24_RF24_JNI
 * Method:    read
 * Signature: (JLcom/varel/gereon/RF24/RF24;[BS)V
 */
JNIEXPORT void JNICALL Java_com_varel_gereon_RF24_RF24_1JNI_read
  (JNIEnv *, jclass, jlong, jobject, jbyteArray, jshort);

/*
 * Class:     com_varel_gereon_RF24_RF24_JNI
 * Method:    setDataRate
 * Signature: (JLcom/varel/gereon/RF24/RF24;S)Z
 */
JNIEXPORT jboolean JNICALL Java_com_varel_gereon_RF24_RF24_1JNI_setDataRate
  (JNIEnv *, jclass, jlong, jobject, jshort);

/*
 * Class:     com_varel_gereon_RF24_RF24_JNI
 * Method:    isChipConnected
 * Signature: (JLcom/varel/gereon/RF24/RF24;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_varel_gereon_RF24_RF24_1JNI_isChipConnected
  (JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     com_varel_gereon_RF24_RF24_JNI
 * Method:    powerDown
 * Signature: (JLcom/varel/gereon/RF24/RF24;)V
 */
JNIEXPORT void JNICALL Java_com_varel_gereon_RF24_RF24_1JNI_powerDown
  (JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     com_varel_gereon_RF24_RF24_JNI
 * Method:    powerUp
 * Signature: (JLcom/varel/gereon/RF24/RF24;)V
 */
JNIEXPORT void JNICALL Java_com_varel_gereon_RF24_RF24_1JNI_powerUp
  (JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     com_varel_gereon_RF24_RF24_JNI
 * Method:    txStandBy
 * Signature: (JLcom/varel/gereon/RF24/RF24;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_varel_gereon_RF24_RF24_1JNI_txStandBy
  (JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     com_varel_gereon_RF24_RF24_JNI
 * Method:    closeReadingPipe
 * Signature: (JLcom/varel/gereon/RF24/RF24;S)V
 */
JNIEXPORT void JNICALL Java_com_varel_gereon_RF24_RF24_1JNI_closeReadingPipe
  (JNIEnv *, jclass, jlong, jobject, jshort);

/*
 * Class:     com_varel_gereon_RF24_RF24_JNI
 * Method:    setAddressWidth
 * Signature: (JLcom/varel/gereon/RF24/RF24;S)V
 */
JNIEXPORT void JNICALL Java_com_varel_gereon_RF24_RF24_1JNI_setAddressWidth
  (JNIEnv *, jclass, jlong, jobject, jshort);

/*
 * Class:     com_varel_gereon_RF24_RF24_JNI
 * Method:    setChannel
 * Signature: (JLcom/varel/gereon/RF24/RF24;S)V
 */
JNIEXPORT void JNICALL Java_com_varel_gereon_RF24_RF24_1JNI_setChannel
  (JNIEnv *, jclass, jlong, jobject, jshort);

/*
 * Class:     com_varel_gereon_RF24_RF24_JNI
 * Method:    setPayloadSize
 * Signature: (JLcom/varel/gereon/RF24/RF24;S)V
 */
JNIEXPORT void JNICALL Java_com_varel_gereon_RF24_RF24_1JNI_setPayloadSize
  (JNIEnv *, jclass, jlong, jobject, jshort);

/*
 * Class:     com_varel_gereon_RF24_RF24_JNI
 * Method:    setAutoAcknowledge
 * Signature: (JLcom/varel/gereon/RF24/RF24;Z)V
 */
JNIEXPORT void JNICALL Java_com_varel_gereon_RF24_RF24_1JNI_setAutoAcknowledge
  (JNIEnv *, jclass, jlong, jobject, jboolean);

/*
 * Class:     com_varel_gereon_RF24_RF24_JNI
 * Method:    setPALevel
 * Signature: (JLcom/varel/gereon/RF24/RF24;S)V
 */
JNIEXPORT void JNICALL Java_com_varel_gereon_RF24_RF24_1JNI_setPALevel
  (JNIEnv *, jclass, jlong, jobject, jshort);

#ifdef __cplusplus
}
#endif
#endif
