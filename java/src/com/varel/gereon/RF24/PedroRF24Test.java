//import com.varel.gereon.RF24;
package com.varel.gereon.RF24;
import java.util.*;
import java.io.*;

class PedroRF24Test {
    public static void main(String[] args) {
        System.out.println("Hello, World!");
        
        System.loadLibrary("rf24JniLib"); // Load the library somewhere in the code.
        
        System.out.println("Library loaded!");
        
		RF24 rf24 = new RF24((short)22, (short)0); // CE-Pin, CS-Pin
		
		rf24.begin();
		
		rf24.setDataRate(RF24_Datarate.RF24_1MBPS);
		rf24.setPALevel(RF24_PA.RF24_PA_HIGH);
		
		
		//rf24.setDataRate(RF24_Datarate.RF24_1MBPS);
		//rf24.setPALevel(RF24_PA.RF24_PA_HIGH);
		
		String writingPipe = "00001";
		//String readingPipe = "slave";
		
		
		rf24.openWritingPipe(writingPipe.getBytes());
        //rf24.openReadingPipe((short) 0, readingPipe.getBytes());
		
		if (!rf24.isChipConnected()) {
			System.out.println("No module connected.");
			return;
		}
		
		rf24.stopListening();
		
		System.out.println("After radio initilization!");
		System.out.println("Size of writing pipe: " + writingPipe.length());
		
		String messageToWrite = "Hello from RPi java";
		
		byte[] buffer = messageToWrite.getBytes();
		
		System.out.println("Sending message: " + (short)buffer.length);
		
		while(true){
		
			rf24.write(buffer, (short)buffer.length);
		
			System.out.println("Message sent");
		}
        
        /*
        String messageToSend = "S;O;1\n";
        
        OutgoingMessage myOutgoingMessage = new OutgoingMessage((byte)1, messageToSend.toCharArray());
        
        System.out.println("Object created");
        
        ByteArrayOutputStream bos = new ByteArrayOutputStream();
		ObjectOutputStream out = null;
		try {
			System.out.println("A");
			out = new ObjectOutputStream(bos);
			System.out.println("B");
			out.writeObject(myOutgoingMessage);
			System.out.println("C");
			out.flush();
			byte[] yourBytes = bos.toByteArray();
		
		System.out.println(yourBytes.toString());
		
		
		}
		catch (IOException ex){
			//Ignore exception
			System.out.println(ex);
		}
		finally {
			try {
				bos.close();
			}
			catch (IOException ex) {
			// ignore close exception
			}
		}*/
	}
}

class OutgoingMessage{
	byte destinationId;
	char message[];
	
	public OutgoingMessage(byte destId, char[] messageToSend){
		destinationId = destId;
		message = messageToSend;
		System.out.println(destinationId);
		System.out.println(message);
	}
}
