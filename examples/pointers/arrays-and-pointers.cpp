#include <iostream>
using namespace std;


void func(int, int*);
void regular_val(int*);

int main(){

  //Pointers store addresses
  int* p = nullptr; //null (like 0 kind of, philosophically suspect)
  int* q = nullptr; //null

  int n = 9;
  int m = 2000;

  int evens[4] = {2, 4, 6, 8};

  p = &n;
  q = &m;

  *p = 99;

  cout << "What is the address of n?" << endl;
  cout << &n << endl << endl;

  cout << "What is the value stored inside the pointer?" << endl;
  cout << p << endl << endl;

  cout << "What is the value stored at the place the pointer points to?" << endl;
  cout << *p << endl;
  cout << n << endl;

  p = evens;

  for(int i = 0; i < 4; i++){
    cout << p[i] << endl;  //p[0], p[1]...
  }

  cout << endl << endl;

  func(n, evens); 
  
  //evens is now [42, 4, 6, 8]

  cout << n << endl;
  cout << *(evens + 1) << endl; //evens[1]

  cout << endl << endl << "Printing the whole array using array notation" << endl;

  for(int i = 0; i < 4; i++){
    cout << *(evens + i) << endl;
  }
  cout << endl;

  cout << sizeof(int) << endl << endl;

  cout << *q << endl;
  regular_val(q);
  cout << *q << endl << endl;

   
  return 0;
}


void func(int x, int *arr){
  cout << x << endl;
  cout << arr[0] << endl;

  x = 5;
  arr[0] = 42; 
}


void regular_val(int *q){
 *q = *q + 10;
}



/* similar to...
void regular_val(int &m){
 m = m + 10;
}
*/
