#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ifstream in;
  ifstream in2;

  ofstream out;

  string str;

  out.open("output.txt");
  in.open("data.txt");

  if(in){
    while(in >> str){
      out << str; 
    }

    in.close();
  }

  out << "\n";

  in2.open("data.txt");


  if(in2){
    while(getline(in2, str)){
      out << str << "\n";
    }
  }

  out.close();
  return 0;
}
