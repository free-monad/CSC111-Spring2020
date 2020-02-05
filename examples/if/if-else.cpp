#include <iostream>

using namespace std;

int main()
{
  enum Answer {Yes, No};

  Answer myAnswer = Yes;

  cout << "Are you going to get an A in Computer Science?" << endl;
  cout << "Press [ENTER] to conintue" << endl;
  cin.get();

  if(myAnswer == Yes){
    cout << "I believe in you";
  } else {
    cout << "Uh-oh!";
  }

  cout << endl << endl;

  return 0;
}
