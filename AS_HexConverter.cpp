/*

*/


#include <Arduino.h>
#include "AS_HexConverter.h"


//
// public methods
//

/* static */
String AS_HexConverter::FloatToHex(float value)
{
  char buff[20] = { 0 };
  sprintf(buff, "%08lx", *((uint32_t*)&value));
//  sprintf(buff, "%08x", *((uint32_t*)&value));
  
  return (String)buff;
}



/* static */
float AS_HexConverter::HexToFloat(String value)
{
  float result = 0;
  sscanf(value.c_str(), "%08lx", &result);
  return result;
}



/* static */
float AS_HexConverter::HexToFloat_old(String value)
{
  float result;
  uint8_t bytes[4];
  
  String a1 = value.substring(0, 2);

  for(int i = 0; i < 4; i++)
  {
    String a = value.substring(i*2, i*2+2);
    bytes[3-i] = strtol(a.c_str(), NULL, 16);;
  }

  float f = *((float*)(bytes));
  //DebugSerial.println("f=" + (String)f);

  return f;
  return result;
}




String StringToHex(String value){
  byte byteBuf;
  value.getBytes(byteBuf, value.length());  // byteBuf is ABCD
}


