#include <iostream>

using namespace std;

int main()
{
  enum Gender {Male, Female, Other};

  Gender myGender = Male;

  if(myGender == Male){
    cout << "You are male";
  } else if (myGender == Female){
    cout << "You are female";
  } else {
    cout << "You are other";
  }

  cout << endl << endl;

  return 0;
}
