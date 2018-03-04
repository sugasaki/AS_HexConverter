

#include <AS_HexConverter.h>
#define DebugSerial Serial 

void setup() {

  DebugSerial.begin(115200);  
  DebugSerial.println("start");

  DebugSerial.println(" ");
  DebugSerial.println("------------------------");

  
  FloatToHexString();
  
  DebugSerial.println(" ");
  DebugSerial.println("------------------------");
  
  FloatToHex();
  
}


void FloatToHex() {
  int cnt = 7;
  
  DebugSerial.println("start FloatToHex");

  float value = 123.1234567;
  DebugSerial.print("val="); DebugSerial.println(value, cnt);
  DebugSerial.println("");

  DebugSerial.print("convert to hex. from ");  DebugSerial.println(value, cnt);
  
  char* result = AS_HexConverter::FloatToHex(value);
  DebugSerial.print("result= "); DebugSerial.println(result);

  
}


void FloatToHexString() {
  int cnt = 7;
 
  DebugSerial.println("start FloatToHexString");
    
  float value = 123.1234567;
  DebugSerial.print("val="); DebugSerial.println(value, cnt);
  DebugSerial.println("");
  
  DebugSerial.print("convert to hex. from ");  DebugSerial.println(value, cnt);
  String hex_string = AS_HexConverter::FloatToHexString(value);
  DebugSerial.println("result= " + hex_string);
  DebugSerial.println("");
  
  DebugSerial.println("convert to string. from " + hex_string); 
  float f = AS_HexConverter::HexStringToFloat(hex_string);
  DebugSerial.print("result= "); DebugSerial.println(f, cnt);
  DebugSerial.println("");
}




void loop() {
  // put your main code here, to run repeatedly:

}