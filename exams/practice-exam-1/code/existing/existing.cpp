#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

int getLineCount(string);
string getWord(int, string);
string getAdjective(int);
string getNoun(int);

const string ADJ_FILE = "adjectives.txt";
const string NOUN_FILE = "nouns.txt";

int main(){

  int adj_max = getLineCount(ADJ_FILE);
  int noun_max = getLineCount(NOUN_FILE);

  string adj = getAdjective(adj_max);
  string noun = getNoun(noun_max);

  cout << adj + "_" + noun << endl;

  //concisely:
  // cout << getAdjective(getLineCount(ADJ_FILE)) + "_" + getNoun(getLineCount(NOUN_FILE)) << endl;

  return 0;
}


int getLineCount(string filename){
  ifstream in;
  in.open(filename);

  string line;
  int line_count = 0;

  while(getline(in, line)){
    line_count++;
  }

  in.close();

  return line_count;
}


string getAdjective(int max){
  return getWord(max, ADJ_FILE); 
}


string getNoun(int max){
  return getWord(max, NOUN_FILE);
}


string getWord(int max, string filename){
  string word;
  unsigned int s = time(0);
  int min = 1;
  ifstream in;

  in.open(filename);
  srand(s);

  int r = (rand() % (max - min + 1)) + min;

  for(int i = 0; i < r; i++){
     in >> word;
  }

  in.close();

  return word;
}
