#include <iostream>
using namespace std;


const int NUM_ROWS = 5;
const int NUM_COLS = 2;

void fill_arr(int[][NUM_COLS]);
void print_arr(const int[][NUM_COLS]);

int main(){
  int x[NUM_ROWS][NUM_COLS];
  
  fill_arr(x);  
  print_arr(x); 

  return 0;
}

void fill_arr(int arr[][NUM_COLS]){
  for(int i = 0; i < NUM_ROWS; i++){
    for(int j = 0; j < NUM_COLS; j++){
      arr[i][j] = i + j; 
    }
  }
}

void print_arr(const int arr[][NUM_COLS]){
  for(int i = 0; i < NUM_ROWS; i++){
    for(int j = 0; j < NUM_COLS; j++){
      cout << arr[i][j] << " ";
    }
    cout << "\n";
  }
}

