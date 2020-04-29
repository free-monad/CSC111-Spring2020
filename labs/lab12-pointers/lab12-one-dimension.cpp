#include <iostream>
#include <cstdlib>

using namespace std;


char* generate_string(int);
void print_word(char*,int);

const int A_CHAR = 97;
const int Z_CHAR = 122;

int main(){
  srand(time(0));

  char* line = nullptr; // char line[]

  line = generate_string(10);
  print_word(line, 10);

  return 0;
}


char* generate_string(int size){
  char* l = new char[size];
  
  for(int i = 0; i < size; i++){
    l[i] = rand() % (Z_CHAR - A_CHAR) + A_CHAR;
  }

  return l;
}


void print_word(char* word, int size){
  for(int i = 0; i < size; i++){
    cout << word[i] << " ";
  }
  cout << endl;
}
