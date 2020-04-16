#include <iostream>
using namespace std;

void bubbleSort(int[], int);

//void bubbleSort(string[], int);
//void bubbleSort(vector<int>,);

void swap(int&, int&);

//void swap(string&, string&);

const int ARRAY_SIZE = 6;

int main(){

  int sequence[ARRAY_SIZE] = {4, 8, 42, 1, 33, 16};
  //4 8 1 33 16 42
  //
  bubbleSort(sequence, ARRAY_SIZE);

  for(int i = 0; i < ARRAY_SIZE; i++){
    cout << sequence[i] << " ";
  }

  return 0;
}


void bubbleSort(int seq[], int size){
  int maxElement;

  for(maxElement = size -1; maxElement > 0; maxElement --){
    for(int i = 0; i < maxElement; i++){
      if (seq[i] > seq[i + 1]){
        swap(seq[i], seq[i + 1]);
      }
    }
  }
}

void swap(int &a, int &b){
  int temp;

  temp = a;
  a = b;
  b = temp;
}


