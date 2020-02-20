#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;


int main(){

  string line;

  ifstream data;
  ofstream result;

  data.open("data.txt");
  result.open("result.txt");

  while(getline(data, line)){

    int num;
    string numberStr = "";

    for(int i = 0; i <= line.length(); i++){
      if(line[i] != ' '){
        numberStr += line[i];

	if(i == line.length() - 1){
	  istringstream(numberStr) >> num;
	  result << (char)num;
          result << " ";
	}
      }else{
        istringstream(numberStr) >> num;
        result << (char)num;

	
	if(line[i] == ' '){
	  numberStr = "";
	}

      }
    }

  }
  
  return 0;
}
