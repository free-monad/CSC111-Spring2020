#include <iostream>
#include <vector>

using namespace std;

//int linear_search(string, const string[], int);

int linear_search(string, const vector<string>);

int main(){

  vector<string> zoo = {"ape", "baboon", "bird", "cat", "dog", "elephant", "giraffe", "wolf"};
  vector<string> wikipedia = {"alphabet", "beta", "constant", "definitions"};

  cout << "The position for wolf is: ";
  cout << linear_search("wolf", zoo) << endl;
  cout << endl;

  cout << "The position for duck is: ";
  //cout << linear_search("duck", zoo, ZOO_CAPACITY) << endl;
  cout << linear_search("duck", zoo) << endl;

  return 0;
}


/*
 * Takes search string as input and then looks to see if that string is in the array.
 * The function returns the integer location of the search term. 
 * If there is no match, return -1
*/
int linear_search(string search_term, vector<string> v){
  int index = -1;
  int iterator = 0;
  
  for(int i = 0; i < v.size(); i++){
    if(v.at(i) == search_term){
      index = i;
      break;
    }
  }
 

  /*
  for(string element : v){
    if(element == search_term){
      index = iterator;
      break;
    }

    iterator++;
  }
  */

  return index;
}
