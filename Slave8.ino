// #include <Wire.h>
// #include <Servo.h>

// Servo index, middle;
// int indexAngle = 90;
// int middleAngle = 90;

// void receiveData(int bytes){
//   if (Wire.available() >= 2) {
//     indexAngle  = Wire.read();
//     middleAngle  = Wire.read();
//   }
// }

// void setup(){
//   Wire.begin(8);
//   Wire.onReceive(receiveData);
//   index.attach(9);
//   middle.attach(10);
// }

// void loop() {
//   index.write(indexAngle);
//   middle.write(middleAngle);
//   delay(100);
// }