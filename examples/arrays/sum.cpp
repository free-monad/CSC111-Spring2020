#include <iostream>
#include <fstream>

using namespace std;


int main(){

  ifstream infile;
  infile.open("data.txt");

  int grades[14];

  int input;
  int iterator = 0;

  int sum = 0;

  while(infile >> input){
    grades[iterator] = input;
    iterator++;
  }


  for(int i = 0; i < 14; i++){
    sum = sum + grades[i];
  } 

  cout << sum << endl;


  infile.close();
  return 0;
}
