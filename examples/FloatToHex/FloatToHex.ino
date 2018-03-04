

#include <GDF_HexConverter.h>
#define DebugSerial Serial 

void setup() {

  DebugSerial.begin(115200);  
  DebugSerial.println("start");

  float value = 123.4567890; DebugSerial.println(value,9);
  DebugSerial.print("val="); DebugSerial.println(value, 9);
  DebugSerial.println("");
  
  DebugSerial.print("convert to hex. from ");  DebugSerial.println(value, 9);
  String hex_string = GDF_HexConverter::FloatToHex(value);
  DebugSerial.println("result= " + hex_string);
  DebugSerial.println("");
  
  DebugSerial.println("convert to string. from " + hex_string); 
  float f = GDF_HexConverter::HexToFloat(hex_string.c_str());
  DebugSerial.print("result= "); DebugSerial.println(f, 9);

}



void loop() {
  // put your main code here, to run repeatedly:

}