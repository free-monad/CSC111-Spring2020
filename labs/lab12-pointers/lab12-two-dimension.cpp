#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

const int A_CHAR = 97;
const int Z_CHAR = 122;

char** generate_word_search(const int,const int);
void print_word_search(char**,int,int);


int main(){

  srand(time(0));
    
  char** w1 = generate_word_search(30, 15);
  print_word_search(w1, 30, 15); 

  char** w2 = generate_word_search(10, 5);
  print_word_search(w2,10, 5);

  //Free each sub-array
  for(int i = 0; i < 30; ++i) {
    delete[] w1[i];
  }

  for(int i = 0; i < 10; ++i) {
    delete[] w2[i];
  }

  //Free the array of pointers
  delete[] w1;
  delete[] w2; 

  return 0;
}


char** generate_word_search(const int rows, const int columns){
  char** space = new char* [rows];

  for(int i = 0; i < rows; i++){
    space[i] = new char[columns];
    for(int j = 0; j < columns; j++){
      space[i][j] = rand() % (Z_CHAR - A_CHAR) + A_CHAR;
    }
  }

  return space;
}


void print_word_search(char** word_search, int rows, int columns){

  for(int i = 0; i < rows; i++){
    for(int j = 0; j < columns; j++){
      cout << word_search[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;
}
