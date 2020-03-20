#include <iostream>
using namespace std;

int main(){

  //declare and initialize array
  int x[5] = {2,4,6,8,10};

  /*
  cout << x[0] << endl;
  cout << x[1] << endl;
  cout << x[2] << endl;
  cout << x[3] << endl;
  cout << x[4] << endl;
  */

  //cout << x << endl;

  
  for(int i = 0; i < 5; i++){
    cout << x[i] << endl;
  }
  
  //changing value
  cout << "Change the first value in the array:";
  cin >> x[0]; 
  
  for(int i = 0; i < 5; i++){
    cout << x[i] << endl;
  }
 
  //partial initialization
  int y[10] = {3,6,9};

  cout << endl << endl;

  for(int i = 0; i < 5; i++){
    cout << y[i] << endl;
  }


  cout << endl;




  //implicit size
  int z[] = {1,2,3,4};

  for(int i = 0; i < 4; i++){
    cout << z[i] << endl;
  }









  return 0;
}
