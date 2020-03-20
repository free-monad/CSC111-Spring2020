#include <iostream>
using namespace std;

int main(){

  int x[4] = {1,2,3,4};

  //0,1,2,3,__

  cin >> x[10];

  for(int i = 0; i <= 10; i++){
   cout << x[i] << endl;
  }

  cout << "Still running..." << endl;

  return 0;
}
