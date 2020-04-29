#include <iostream>

using namespace std;

//pointers to constants
//constant pointers
//

void f(const int*);

int main(){

  int a[3] = {1, 2, 3};
  int n = 95;

  const int *p = a;
  p = &n;

  *p = 94;
  
  f(p);

  return 0;
}

void f(const int *a){
  cout << a[0] << endl;
}
