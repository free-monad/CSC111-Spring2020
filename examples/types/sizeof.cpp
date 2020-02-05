#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

  cout << setw(15) << "The amount of memory allocated for each variable type sizeof(): " << endl;
  cout << endl;
  cout << setw(15) << "bool " << sizeof(bool) << endl;
  cout << setw(15) << "char " << sizeof(char) << endl;
  cout << setw(15) << "short " << sizeof(short) << endl;
  cout << setw(15) << "int " << sizeof(int) << endl;
  cout << setw(15) << "unsigned int " << sizeof(unsigned int) << endl;
  cout << setw(15) << "long " << sizeof(long) << endl;
  cout << setw(15) << "long long " << sizeof(long long) << endl;
  cout << setw(15) << "float " << sizeof(float) << endl;
  cout << setw(15) << "double " << sizeof(double) << endl;
  cout << setw(15) << "long double " << sizeof(long double) << endl;
  cout << endl;
  cout << "(units are in bytes, 1 byte = 8 bits)" << endl << endl;

  return 0;
}
