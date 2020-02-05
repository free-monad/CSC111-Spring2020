#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  const bool t = true;
  const bool f = false;


  cout << "Logical AND (&&)"  << endl;
  cout << "================" << endl;
  cout << "p   q     p && q" << endl;
  cout << "----------------" << endl;
  cout << "0   0       " << (f && f) << endl;
  cout << "0   1       " << (f && t) << endl;
  cout << "1   0       " << (t && f) << endl;
  cout << "1   1       " << (t && t) << endl;

  cout << endl << endl;  

  cout << "Logical OR (||)" << endl;
  cout << "================" << endl;
  cout << "p   q     p || q" << endl;
  cout << "----------------" << endl;
  cout << "0   0       " << (f || f) << endl;
  cout << "0   1       " << (f || t) << endl;
  cout << "1   0       " << (t || f) << endl;
  cout << "1   1       " << (t || t) << endl;

  cout << endl << endl;  

 
  cout << "Logical NOT (!)" << endl;
  cout << "================" << endl;
  cout << "  p         !p  " << endl;
  cout << "----------------" << endl;
  cout << "  0         " << !f << endl;
  cout << "  1         " << !t << endl;

  cout << endl << endl;


  cout << "Logical XOR (!=)" << endl;
  cout << "================" << endl;
  cout << "p   q     p != q" << endl;
  cout << "----------------" << endl;
  cout << "0   0       " << (f != f) << endl;
  cout << "0   1       " << (f != t) << endl;
  cout << "1   0       " << (t != f) << endl;
  cout << "1   1       " << (t != t) << endl;

  cout << endl << endl;  


  cout << "    IFF (==)" << endl;
  cout << "================" << endl;
  cout << "p   q     p == q" << endl;
  cout << "----------------" << endl;
  cout << "0   0       " << (f == f) << endl;
  cout << "0   1       " << (f == t) << endl;
  cout << "1   0       " << (t == f) << endl;
  cout << "1   1       " << (t == t) << endl;

  cout << endl << endl;  


  cout << "   IF (!p || q)" << endl;
  cout << "==================" << endl;
  cout << "p   q     !p || q " << endl;
  cout << "------------------" << endl;
  cout << "0   0        " << (!f || f) << endl;
  cout << "0   1        " << (!f || t) << endl;
  cout << "1   0        " << (!t || f) << endl;
  cout << "1   1        " << (!t || t) << endl;

  cout << endl << endl;

  return 0;
}
