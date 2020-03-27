#include <iostream>
using namespace std;

int main(){

  int num[5] = {1,2,3,4,5};

  for(int i = 0; i < 5; i++){
    cout << num[i] << " ";
  }

  cout << endl;

  for(int val : num){
    cout << val << " ";
  }

  cout << endl;

  for(auto val : num){
    cout << val << " ";
  }

  cout << endl << endl;

  for(int &val : num){
    val = val * 2;
    //cout << val * 2 << " ";
  }

  cout << endl;

  for(int val : num){
    cout << val << " "; 
  }

  cout << endl;

  return 0;
}
