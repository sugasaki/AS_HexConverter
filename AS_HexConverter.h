/*

*/

#ifndef __AS_HexConverter_h
#define __AS_HexConverter_h



class AS_HexConverter
{
public:

  static char *FloatToHex(float value); 

  static String FloatToHexString(float value); 
  static String DoubleToHexString(double value); 

  static float HexStringToFloat(String value);
  static double HexStringToDouble(String value);
  
private:
  static float HexToFloat_old(String value);

};

#endif // def(__AS_HexConverter_h)
