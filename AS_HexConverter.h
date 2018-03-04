/*

*/

#ifndef __AS_HexConverter_h
#define __AS_HexConverter_h



class AS_HexConverter
{
public:

  static String FloatToHex(float value); 

  static float HexToFloat(String value);

  
private:
  static float HexToFloat_old(String value);

};

#endif // def(__AS_HexConverter_h)
