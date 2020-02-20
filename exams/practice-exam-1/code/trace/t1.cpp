#include <iostream>
using namespace std;


int f1(int x, int y){
  x = y + 11;
  cout << "inside..." << endl;
  cout << x << " " << y << endl;
  cout << "returning..." << endl;
  return x;
}


int f2(int x, int y){
  return f1(y, x);
}


int main(){
  int x = 1;
  int y = 8;
  int a = 3;
  int b = 4;

  cout << "call 1: " << endl 
	  << f1(x, y) << endl;
  cout << x << " " << y << endl 
	<< endl;

  cout << "call 2: " << endl
	 << f1(f1(a, b), f1(b,a)) 
 	 << endl << endl;

  cout << "call 3: " << endl
	 << f2(x, y) 
	 << endl;

  return 0;
}
