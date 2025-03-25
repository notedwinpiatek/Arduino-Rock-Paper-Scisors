// #include <Wire.h>
// #include <Servo.h>

// Servo ring;
// int ringAngle = 30;

// void receiveData(int bytes){
//   if (Wire.available()) {
//     ringAngle  = Wire.read();
//   }
// }

// void setup(){
//   Wire.begin(10);
//   Wire.onReceive(receiveData);
//   ring.attach(6);
// }

// void loop() {
//   ring.write(ringAngle);
//   delay(100);
// }