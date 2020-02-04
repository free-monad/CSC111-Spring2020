#include <iostream>

using namespace std;

int main()
{
  string sentence;

  int num;
  char b;

  cout << "Please enter a full sentence: " << endl;
  getline(cin, sentence);

  cout << endl << "This is what you typed: " << endl;
  cout << sentence << endl << endl;

  cout << "Your sentence is " << sentence.length() << " characters long!" << endl;


  cout << "Press ENTER to continue";

  cin.get();

  cout << endl << "Next type in any integer: ";
  cin >> num;

  cin.ignore();

  cout << endl << "Next type in any character: ";
  cin >> b;

  cout << endl << "Your number is " << num << " and your char is " << b << "!" << endl << endl;

  return 0;
}

