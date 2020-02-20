#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

char convertInt(string);
string processLine(string);

int main(){

  string line;

  ifstream data;
  ofstream result;

  data.open("data.txt");
  result.open("result.txt");

  while(getline(data, line)){
    result << processLine(line);
  }
  
  data.close();
  result.close();
  
  return 0;
}


char convertInt(string s){
  int num;
  istringstream(s) >> num;

  return (char)num;
}


string processLine(string s){
  int num;
  string numberStr = "";
  string word = "";

  for(int i = 0; i <= s.length(); i++){
    if(s[i] != ' '){
      numberStr += s[i];

      if(i == s.length() - 1){
        word += convertInt(numberStr); 
        word += " ";
      }
      }else{
        word += convertInt(numberStr);

	if(s[i] == ' '){
	  numberStr = "";
	}
      }
  }
 
  return word; 
}
