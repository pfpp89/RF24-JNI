#include <RF24.h>


// Define the CE (Chip Enable) pin):
#define RF_CE 7

// Define the CSN (Chip Select Not) pin:
#define RF_CSN 8

// Define the radio, which will be used to access nRF24L01 functions:
RF24 radio(RF_CE, RF_CSN);

const byte masterPipeAddress[6] = "00001";
const byte slavePipeAddress[6] = "00002";

int counter = 0;

void setup() {
  Serial.begin(9600);
  
  //Begin the radio:
  radio.begin();

  // Open pipes:
  radio.openWritingPipe(slavePipeAddress);
  radio.openReadingPipe(1, masterPipeAddress);

  // Set data rate and Power level:
  radio.setDataRate(RF24_1MBPS);
  radio.setPALevel(RF24_PA_MIN);

  // Start listening from the start:
  radio.startListening();

}

void loop() {
  // Check for input message:
  if(radio.available()){
    char incomming[32] = "";

    char outgoing[16] = "";

    // Read the buffer:
    radio.read(&incomming, sizeof(incomming));

    Serial.print("Message received: ");
    Serial.println(incomming);

    // Stop listening to write response message:
    radio.stopListening();

    // Prepare response:
    itoa(counter, outgoing, 10);

    //delay(50);
    unsigned long startTime = millis();
    int counter = 0;
    while(!radio.available() && (millis() - startTime < 50)){
      counter++;
    }

    Serial.print("UnavailabilityCounter: ");
    Serial.println(counter);

    // Send response message:
    bool sendResult = radio.write(&outgoing, sizeof(outgoing));

    

    // Immediately start listening:
    radio.startListening();

    Serial.print("Sent status: ");
    Serial.print(sendResult);
    Serial.print(" Message sent: ");
    Serial.println(outgoing);
    
  }

  // Increment counter:
  counter++;

  delay(10);
}
