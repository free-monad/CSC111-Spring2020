#include <iostream>

using namespace std;

int main()
{
  bool t = true;
  bool f = false;

  string result1 = t ? "yes" : "no";
  string result2 = f ? "yes" : "no";

  cout << "true  ? \"yes\" : \"no\" \t" << result1 << endl;
  cout << "false ? \"yes\" : \"no\" \t" << result2 << endl << endl;

  return 0;
}
