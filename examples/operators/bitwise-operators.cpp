#include <iostream>
#include <iomanip>
#include <bitset>

using namespace std;

int main()
{
  unsigned short max = 0b1111111111111111;
  unsigned short min = 0b0000000000000000;
  unsigned short rnd = 0b1101110111011101;
  unsigned short msk = 0b1111111100000000;
  unsigned short one = 0b0000000000000001;
  unsigned short hlf = 0b1000000000000000;

  cout << "=====================================" << endl;
  cout << "             Operand Data            " << endl;
  cout << "-------------------------------------" << endl;
  cout << "max:        " << bitset<16>(max) << endl;
  cout << "min:        " << bitset<16>(min) << endl;
  cout << "rnd:        " << bitset<16>(rnd) << endl;
  cout << "msk:        " << bitset<16>(msk) << endl;

  cout << endl << endl << endl << endl;

  cout << "=====================================" << endl;
  cout << "             Bitwise Not ~           " << endl;
  cout << "-------------------------------------" << endl;
  cout << "~max        " << bitset<16>(~max) << endl;
  cout << "~min        " << bitset<16>(~min) << endl;
  cout << "~rnd        " << bitset<16>(~rnd) << endl;
  cout << "~msk        " << bitset<16>(~msk) << endl;
  
  cout << endl << endl;


  cout << "=====================================" << endl;
  cout << "            Bitwise And &            " << endl;
  cout << "-------------------------------------" << endl;
  cout << " max & min  " << bitset<16>(max & min) << endl;
  cout << " max & rnd  " << bitset<16>(max & rnd) << endl;
  cout << " max & msk  " << bitset<16>(max & msk) << endl;
  cout << " min & rnd  " << bitset<16>(min & rnd) << endl;
  cout << " min & msk  " << bitset<16>(min & msk) << endl;
  cout << " rnd & msk  " << bitset<16>(rnd & msk) << endl;

  cout << endl << endl;


  cout << "=====================================" << endl;
  cout << "            Bitwise Or |             " << endl;
  cout << "-------------------------------------" << endl;
  cout << " max | min  " << bitset<16>(max | min) << endl;
  cout << " max | rnd  " << bitset<16>(max | rnd) << endl;
  cout << " max | msk  " << bitset<16>(max | msk) << endl;
  cout << " min | rnd  " << bitset<16>(min | rnd) << endl;
  cout << " min | msk  " << bitset<16>(min | msk) << endl;
  cout << " rnd | msk  " << bitset<16>(rnd | msk) << endl;

  cout << endl << endl;
   

  cout << "=====================================" << endl;
  cout << "            Bitwise Xor ^            " << endl;
  cout << "-------------------------------------" << endl;
  cout << " max ^ min  " << bitset<16>(max ^ min) << endl;
  cout << " max ^ rnd  " << bitset<16>(max ^ rnd) << endl;
  cout << " max ^ msk  " << bitset<16>(max ^ msk) << endl;
  cout << " min ^ rnd  " << bitset<16>(min ^ rnd) << endl;
  cout << " min ^ msk  " << bitset<16>(min ^ msk) << endl;
  cout << " rnd ^ msk  " << bitset<16>(rnd ^ msk) << endl;

  cout << endl << endl << endl << endl;




  cout << "one " << bitset<16>(one) << endl;
  cout << "hlf " << bitset<16>(hlf) << endl;

  cout << endl << endl;

  cout << "=====================================" << endl;
  cout << "           Bitshift Left <<          " << endl;
  cout << "-------------------------------------" << endl;
  cout << "one << 1       " << bitset<16>(one << 1) << endl;
  cout << "one << 2       " << bitset<16>(one << 2) << endl;
  cout << "one << 3       " << bitset<16>(one << 3) << endl;
  cout << "one << 4       " << bitset<16>(one << 4) << endl;


  cout << endl << endl;
  cout << "=====================================" << endl;
  cout << "           Bitshift Right >>         " << endl;
  cout << "-------------------------------------" << endl;
  cout << "hlf >> 1       " << bitset<16>(hlf >> 1) << endl;
  cout << "hlf >> 2       " << bitset<16>(hlf >> 2) << endl;
  cout << "hlf >> 3       " << bitset<16>(hlf >> 3) << endl;
  cout << "hlf >> 4       " << bitset<16>(hlf >> 4) << endl;
  
  cout << endl << endl;

  return 0;
}
