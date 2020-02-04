#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int i_op1 = 5, i_op2 = 4, i_op3 = 6, i_op4 = 3;
  double d_op1 = 4.2, d_op2 = 0.33, d_op3 = 0.20;

  cout << i_op1 << " + " << i_op2 << " = " << i_op1 + i_op2 << endl;                       // 5 + 4
  cout << i_op1 << " - " << i_op2 << " = " << i_op1 - i_op2 << endl;                       // 5 - 4
  cout << i_op3 << " / " << i_op2 << " = " << i_op3 / i_op2 << endl;                       // 5 / 4
  cout << i_op3 << " % " << i_op2 << " = " << i_op3 % i_op2 << endl;                       // 5 % 4
  cout << d_op1 << " / " << d_op3 << " = " << d_op1 / d_op3 << endl << endl;

  cout << i_op1 << " + " << i_op2 << " + " << i_op1 << " = " << i_op1 + i_op2 + i_op1 << endl;   // 4 + 5 + 4
  cout << i_op2 << " + " << i_op1 << " / " << d_op3 << " - " << i_op3 << " = " << i_op2 + i_op1 / d_op3 - i_op3 << endl; // 5 + 4 / 0.20 - 6

  cout << "pow(4,3) = " << pow(4,3) << endl << endl;

  int a = 1, b = 2, c = 6, d = 12, e = 5;

  a += 3;
  b -= 1;
  c /= 2;
  d *= 3;
  e *= 2 - 4;
  
  cout << "a: " << a << endl;
  cout << "b: " << b << endl;
  cout << "c: " << c << endl;
  cout << "d: " << d << endl;
  cout << "e: " << e << endl;
  
  cout << endl << endl;

  const double PI = 3.14159265358979323846;
  const double E  = 2.71828182845904523536;

  cout << "abs(-10) = " << abs(-10) << endl;
  cout << "cos(PI) = " << cos(PI) << endl;
  cout << "sin(PI / 2) = " << sin(PI / 2) << endl;
  cout << "exp(1) = " << exp(1) << endl;
  cout << "log(E) = " << log(E) << endl;
  cout << "log10(1000) = " << log10(1000) << endl;
  cout << "round(5.2) = " << round(5.2) << endl;
  cout << "sqrt(9) = " << sqrt(9) << endl;
  cout << "tan(0) = " << tan(0) << endl;


  return 0;
}
