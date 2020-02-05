#include <iostream>
#include <iomanip>
#include <bitset>

using namespace std;

int main()
{
  cout << "===========================================" << endl;
  cout << setw(5) << "dec " << setw(5) << "oct " << setw(5) << "hex" << setw(10) << "binary" << setw(7) << "char" << endl;
  cout << "===========================================" << endl;

  for(char letter = 0b0; letter < 0b1111111; letter++){
    cout << setw(5) << dec << static_cast<int>(letter) 
	 << setw(5) << oct << static_cast<int>(letter) 
	 << setw(5) << hex << static_cast<int>(letter) 
	 << setw(10) << bitset<8>(letter)
	 << setw(7) << letter <<  endl;
  }

  return 0;
}
