package com.varel.gereon.RF24;

import java.util.Date;
import java.util.Calendar;
import java.util.*;
import java.io.*;

class PedroRF24SendReceive {
	public static void main(String[] args) {
		System.out.println("Starting Sned-Receive testa pplication");
		System.out.println("Loading libraries");
		
		System.loadLibrary("rf24JniLib"); // Load the library somewhere in the code.
		
		System.out.println("Libraries loaded");
		System.out.println("Starting RF24");
		
		RF24 rf24 = new RF24((short)22, (short)0); // CE-Pin, CS-Pin
		
		rf24.begin();
		
		System.out.println("RF24 started");
		System.out.println("Setting RF24 data rate and PA level");
		
		rf24.setDataRate(RF24_Datarate.RF24_1MBPS);
		rf24.setPALevel(RF24_PA.RF24_PA_HIGH);
		
		System.out.println("RF24 data rate and PA levelset");
		System.out.println("Opening writing pipe.");
		
		String writingPipe = "00001";
		String readingPipe = "00002";
		
		rf24.openWritingPipe(writingPipe.getBytes());
		
		System.out.println("Writing pipe opened");
		System.out.println("Opening reading pipe");
		
		rf24.openReadingPipe((short) 0, readingPipe.getBytes());
		
		System.out.println("Reading pipe opened");
		System.out.println("Checkign module connectivity");
		
		if (!rf24.isChipConnected()) {
			System.out.println("No module connected.");
			return;
		}
		
		System.out.println("Module connected");
		System.out.println("");
		
		rf24.stopListening();
		
		System.out.println("After radio initilization!");
		System.out.println("Size of writing pipe: " + writingPipe.length());
		
		String messageToWrite = "Hello from RPi java";
		
		byte[] outputBuffer = messageToWrite.getBytes();
		byte[] inputBuffer = "00000000000000000000000000000000".getBytes();
		
		System.out.println(new String(outputBuffer));
		System.out.println(new String(inputBuffer));
		
		int totalWaitTimeMs = 1000;
		int timeBetweenPollsMs = 1000;
		
		//Getting the current date
		Date date = new Date();
		Calendar cal = Calendar.getInstance();
		//date.
		
		//This method returns the time in millis
		//long currentTimeMillis = date.getTime();
		long timeoutCounterStartMillis;
		
		
		while(true){
			
			System.out.println("Sending message (Size: " + (short)outputBuffer.length + ")");
			
			rf24.write(outputBuffer, (short)outputBuffer.length);
			
			// Enter in listening mode:
			rf24.startListening();
			
			boolean timeOut = false;
			
			timeoutCounterStartMillis = System.currentTimeMillis();
			
			
			// Check if there is a response or if timeout was hit:
			while(true){
				if (rf24.available()){
					break;
				}
				else if(System.currentTimeMillis() - timeoutCounterStartMillis >= totalWaitTimeMs){
					timeOut = true;
					break;
				}
			}
			
			if (!timeOut){
				// If there was no timeout, message was received. Print it:
				
				rf24.read(inputBuffer, (short)inputBuffer.length);
				
				rf24.stopListening();
				
				System.out.println("Received message: " + new String(inputBuffer));
				
			}
			else{
				System.out.println("Timeout");
				
				rf24.stopListening();
			}
			
			timeoutCounterStartMillis = System.currentTimeMillis();
			
			// Sleep between messages:
			while( System.currentTimeMillis() - timeoutCounterStartMillis < timeBetweenPollsMs);
			
		}
		
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
