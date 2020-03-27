#include <iostream>
#include <vector>

using namespace std;

int main(){

  vector<int> v;
  vector<int> t;
  vector<string> str;

  //add some elements
  v.push_back(4);
  v.push_back(2);

  t.push_back(3);
  t.push_back(6);

  str.push_back("clown");
  str.push_back("magician");
  str.push_back("accountant");

  cout << v.at(0) << endl;
  cout << v.at(1) << endl << endl;

  cout << t.at(0) << endl;
  cout << t.at(1) << endl << endl;

  cout << str.at(0) << endl;
  cout << str.at(1) << endl;
  cout << str.at(2) << endl << endl;

  cout << v.size() << endl;
  cout << t.size() << endl;
  cout << str.size() << endl << endl;

  for(int i = 0; i < str.size(); i++){
    str.at(i) = str.at(i) + "s";
  }

  for(string word : str){
    cout << word << endl;
  }

  str.pop_back();

  for(string word : str){
    cout << word << endl;
  }

  
  for(int num : v){
    cout << num << endl;
  }

  cout << endl;
  cout << v.empty() << endl;

  v.clear();

  for (int num : v){
    cout << num << endl;
  }

  cout << v.empty();



  v.empty();

  return 0;
}
