
/*
 * for ESP32 only
 * It does not work properly with "arduino uno" "ESP8266".
 * 
 */

#include <AS_HexConverter.h>

#define DebugSerial Serial 



void setup() {
  
  DebugSerial.begin(115200);  
  DebugSerial.println("start");


  DebugSerial.println(" ");
  DebugSerial.println("------------------------");

  DoubleToHexString();
  
  
}



void DoubleToHexString() {
  int cnt = 13;

  DebugSerial.println("start DoubleToHexString");
    
  double value = 123.1234567890123;
  DebugSerial.print("val="); DebugSerial.println(value, cnt);
  DebugSerial.println("");
  
  DebugSerial.print("convert to hex. from ");  DebugSerial.println(value, cnt);
  String hex_string = AS_HexConverter::DoubleToHexString(value);
  DebugSerial.println("result= " + hex_string);
  DebugSerial.println("");
  
  DebugSerial.println("convert to string. from " + hex_string); 
  double f = AS_HexConverter::HexStringToDouble(hex_string);
  DebugSerial.print("result= "); DebugSerial.println(f, cnt);
  DebugSerial.println("");
}





void loop() {
  // put your main code here, to run repeatedly:

}