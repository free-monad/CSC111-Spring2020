#include <iostream>
using namespace std;

int main() 
{
  int intInput;
  double dblInput;
  char chInput;
  string strInput;

  cout << "Please provide an int" << endl;
  cin >> intInput;

  cout << "Please provide a double" << endl;
  cin >> dblInput;

  cout << "Please provide a char" << endl;
  cin >> chInput;

  cout << "Please provide a string" << endl;
  cin >> strInput;

  cout << endl << endl << "Your inputs are: " << endl;
  cout << "int: " << intInput << endl;
  cout << "double: " << dblInput << endl;
  cout << "char: " << chInput << endl;
  cout << "string: " << strInput << endl << endl;
  
  return 0;
}
