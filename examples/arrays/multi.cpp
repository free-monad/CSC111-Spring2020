#include <iostream>
using namespace std;



int main(){

  const int NUM_ROWS = 5;
  const int NUM_COLS = 2;

  int x[NUM_ROWS][NUM_COLS];


  /*
   [0,1]
   [1,2]
   [2,3]
   [3,4]
   [4,5]
  */

  //x[2][1] = 3


  /*
  x[0][0] = 0;
  x[0][1] = 1;
  x[1][0] = 1;
  x[1][1] = 2;
  x[2][0] = 2;
  x[2][1] = 3;
  x[3][0] = 3;
  x[3][1] = 4;
  x[4][0] = 4;
  x[4][1] = 5;
  */

  for(int i = 0; i < NUM_ROWS; i++){
    for(int j = 0; j < NUM_COLS; j++){
      x[i][j] = i + j; 
    }
  }
 

  for(int i = 0; i < NUM_ROWS; i++){
    for(int j = 0; j < NUM_COLS; j++){
      cout << x[i][j] << " ";
    }
    cout << "\n";
  }

  


  return 0;
}
