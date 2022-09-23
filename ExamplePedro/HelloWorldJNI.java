//package com.PedroJNITest.jni;
package com.varel.gereon.RF24;

public class HelloWorldJNI {

    public static void main(String[] args) {
	System.loadLibrary("rf24JniLib");
        RF24 rf24 = new RF24((short)22, (short)0); // CE-Pin, CS-Pin
	rf24.begin();
        
    }
}
