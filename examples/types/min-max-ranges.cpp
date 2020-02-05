#include <iostream>
#include <limits>
#include <iomanip>

using namespace std;

int main()
{
  cout << "====================================================================================" << endl;
  cout << setw(25) << "type" << setw(25) << "min" << setw(25) << "max" << endl;
  cout << "====================================================================================" << endl;
  cout << setw(25) << "bool" << setw(25) << numeric_limits<bool>::min() << setw(25) << numeric_limits<bool>::max() << endl;
  cout << setw(25) << "short" << setw(25) << numeric_limits<short>::min() << setw(25) << numeric_limits<short>::max() << endl;
  cout << setw(25) << "unsigned short" << setw(25) << numeric_limits<unsigned short>::min() << setw(25) << numeric_limits<unsigned short>::max() << endl;
  cout << setw(25) << "int" << setw(25) << numeric_limits<int>::min() << setw(25) << numeric_limits<int>::max() << endl;
  cout << setw(25) << "unsigned int" << setw(25) << numeric_limits<unsigned int>::min() << setw(25) << numeric_limits<unsigned int>::max() << endl;
  cout << setw(25) << "long" << setw(25) << numeric_limits<long>::min() << setw(25) << numeric_limits<long>::max() << endl;
  cout << setw(25) << "unsigned long" << setw(25) << numeric_limits<unsigned long>::min() << setw(25) << numeric_limits<unsigned long>::max() << endl;
  cout << setw(25) << "long long" << setw(25) << numeric_limits<unsigned long long>::min() << setw(25) << numeric_limits<long long>::max() << endl;
  cout << setw(25) << "unsigned long long" << setw(25) << numeric_limits<unsigned long long>::min() << setw(25) << numeric_limits<unsigned long long>::max() << endl;
  cout << setw(25) << "float" << setw(25) << numeric_limits<float>::min() << setw(25) << numeric_limits<float>::max() << endl;
  cout << setw(25) << "double" << setw(25) << numeric_limits<double>::min() << setw(25) << numeric_limits<double>::max() << endl;
  cout << setw(25) << "long double" << setw(25) << numeric_limits<long double>::min() << setw(25) << numeric_limits<long double>::max() << endl;

  return 0;
}
