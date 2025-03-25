#include <Wire.h>

void setup() {
  Wire.begin(); // Start I2C as Master
  Serial.begin(9600);
  randomSeed(analogRead(0)); // Seed randomness
}

void sendToSlave(int slaveAddress, int angle1, int angle2) {
  Wire.beginTransmission(slaveAddress);
  Wire.write(angle1);
  Wire.write(angle2);
  Wire.endTransmission();
}

void sendToLastSlave(int slaveAddress, int angle) {
  Wire.beginTransmission(slaveAddress);
  Wire.write(angle);
  Wire.endTransmission();
}

void loop() {
  int choice = random(3); // 0 = Rock, 1 = Paper, 2 = Scissors

  Serial.print("Arduino Hand chooses: ");
  if (choice == 0) { // Rock (Closed fist)
    Serial.println("Rock");
    sendToSlave(8, 0, 0);  // Index & Middle closed
    sendToSlave(9, 0, 0);  // Pinky & Thumb closed
    sendToLastSlave(10, 0); // Ring closed
  } 
  else if (choice == 1) { // Paper (Open hand)
    Serial.println("Paper");
    sendToSlave(8, 120, 120); // Index & Middle open
    sendToSlave(9, 120, 120); // Pinky & Thumb open
    sendToLastSlave(10, 120); // Ring open
  } 
  else { // Scissors (Index & Middle open, rest closed)
    Serial.println("Scissors");
    sendToSlave(8, 0, 0);  // Index & Middle open
    sendToSlave(9, 120, 120);  // Pinky & Thumb closed
    sendToLastSlave(10, 120);  // Ring closed
  }

  delay(800); // Wait before next round
}