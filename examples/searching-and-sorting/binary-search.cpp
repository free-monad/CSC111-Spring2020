#include <iostream>
using namespace std;


const int ZOO_CAPACITY = 8;
const int PAGES = 4;

int binary_search(const int[], int, int);

int main(){

  string zoo[] = {"ape", "baboon", "bird", "cat", "dog", "elephant", "giraffe", "wolf"};
  string wikipedia[] = {"alphabet", "beta", "constant", "definitions"};

  int evens[] = {2,4,6,8,10,12};

  cout << binary_search(evens, 6, 10) << endl;


  return 0;
}


/*
 * Takes search string as input and then looks to see if that string is in the array.
 * The function returns the integer location of the search term. 
 * If there is no match, return -1
*/

int binary_search(const int arr[], int size, int value){
  int position = -1;

  int middle;
  int first = 0;
  int last = size - 1;
  
  bool found = false;

  while(!found && first <= last){
    middle = (first + last) / 2;

    if(arr[middle] == value){
      found = true;
      position = middle;
    }else if(arr[middle] > value){
      last = middle - 1;
    } else{
      first = middle + 1;
    }
  }


  return position;
}
