#include <iostream>
#include <vector>

using namespace std;

int main(){

  vector<int> v;
  vector<int> t;

  v.push_back(4);
  v.push_back(2);

  t.push_back(3);
  t.push_back(6);

  cout << v.at(1) << endl;
  cout << t.at(1) << endl;

  return 0;
}
