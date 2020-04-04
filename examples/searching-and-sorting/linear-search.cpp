#include <iostream>
using namespace std;

int linear_search(string, string[], int);

const int ZOO_CAPACITY = 8;
const int PAGES = 4;

int main(){

  string zoo[] = {"ape", "baboon", "bird", "cat", "dog", "elephant", "giraffe", "wolf"};
  string wikipedia[] = {"alphabet", "beta", "constant", "definitions"};

  cout << "The position for wolf is: ";
  cout << linear_search("wolf", zoo, ZOO_CAPACITY) << endl;

  cout << endl;

  cout << "The position for duck is: ";
  cout << linear_search("duck", zoo, ZOO_CAPACITY) << endl;
  return 0;
}


/*
 * Takes search string as input and then looks to see if that string is in the array.
 * The function returns the integer location of the search term. 
 * If there is no match, return -1
*/
int linear_search(string search_term, string arr[], int array_size){
  int index = -1;
  
  for(int i = 0; i < array_size; i++){
    if(arr[i] == search_term){
      index = i;
      break;
    }
  }

  return index;
}
