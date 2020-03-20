#include <iostream>
using namespace std;

int main(){

  int arr[10];

  for(int i = 0; i < 10; i++){
    cin >> arr[i];
  }

  cout << endl << endl;

  for(int i = 0; i < 10; i++){
    cout << arr[i] << endl;
  }

  cout << arr << endl;

  return 0;
}
