// #include <Wire.h>
// #include <Servo.h>

// Servo thumb, pinky;
// int thumbAngle = 90;
// int pinkyAngle = 90;

// void receiveData(int bytes){
//   if (Wire.available() >= 2) {
//     thumbAngle  = Wire.read();
//     pinkyAngle  = Wire.read();
//   }
// }

// void setup(){
//   Wire.begin(9);
//   Wire.onReceive(receiveData);
//   thumb.attach(3);
//   pinky.attach(5);
// }

// void loop() {
//   thumb.write(thumbAngle);
//   pinky.write(pinkyAngle);
//   delay(100);
// }