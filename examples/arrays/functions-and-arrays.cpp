#include <iostream>
#include <fstream>

using namespace std;

int total(int[]);
void edit_array(int[]);

int main(){

  ifstream infile;
  infile.open("data.txt");

  int grades[14];

  int input;
  int iterator = 0;


  while(infile >> input){
    grades[iterator] = input;
    iterator++;
  }


  cout << total(grades) << endl;

  cout << grades[0];

  edit_array(grades);

  cout << grades[0];

  infile.close();
  return 0;
}


void edit_array(int arr[]){
  cout << "inside edit_array" << endl;

  cout << arr[0] << endl;

  arr[0] = 666;

  cout << arr[0] << endl;

  cout << "leaving edit_array" << endl;
}

int total(int arr[]){

  int sum = 0;

  for(int i = 0; i < 14; i++){
    sum = sum + arr[i];
  } 

  return sum;
}
