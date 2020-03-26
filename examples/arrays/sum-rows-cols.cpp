#include <iostream>
using namespace std;

void immutable(const int[]);

int main(){

  const int NUM_ROWS = 5;
  const int NUM_COLS = 2;

  int x[NUM_ROWS][NUM_COLS];


  for(int i = 0; i < NUM_ROWS; i++){
    for(int j = 0; j < NUM_COLS; j++){
      x[i][j] = i + j; 
    }
  }
 
  int total[NUM_ROWS];

  for(int i = 0; i < NUM_ROWS; i++){

    total[i] = 0;

    for(int j = 0; j < NUM_COLS; j++){
      total[i] = total[i] + x[i][j]; 
    }
  }


  for(int i = 0; i < NUM_ROWS; i++){
    cout << total[i] << endl;
  }
  

  int arr[10];
  arr[0] = 42;

  immutable(arr);

  cout << arr[0];

  return 0;
}


void immutable(const int arr[]){
  arr[0] = 10;
}

