#include <iostream>
using namespace std;

int* f();

int main(){

  int* a = nullptr;
  int* b = nullptr;

  a = f();  
  b = f();

  cout << *a << endl;
  cout << a[1] << endl;
  cout << a[2] << endl;
  cout << a[3] << endl;


  delete [] a;
  delete [] b;


  return 0;
}


int* f(){
  int* arr = new int[4];
  arr[0] = 10;
  arr[1] = 20;
  arr[2] = 30;
  arr[3] = 40;

  return arr;
}


