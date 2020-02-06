#include <iostream>

using namespace std;

int main()
{
  int input;

  printf("\033c");
  cout << endl << endl;
  cout << "#########################################################################" << endl;
  cout << "#                           Multiples Calculator                        #" << endl;
  cout << "#########################################################################" << endl;
  cout << endl;

  cout << "Welcome to the multiples calculator, pick a number between 1 and 10: " << endl; 
  cin >> input;

  if(input < 1 || input > 10){
    cout << endl << endl << "Your number is not between 1 and 10, how dare you!" << endl;
    cout << "Press [ENTER] to exit" << endl;
    cin.ignore();
    cin.get();
    printf("\033c");
    exit(0);
  }

  if(input % 10 == 0){
    cout << "Your number, " << input << " is a multiple of 10!" << endl;
  }

  if(input % 9 == 0){
    cout << "Your number, " << input << " is a multiple of 9!" << endl;

  }
 
  if(input % 8 == 0){
    cout << "Your number, " << input << " is a multiple of 8!" << endl;

  }

   if(input % 7 == 0){
    cout << "Your number, " << input << " is a multiple of 7!" << endl;

  }

  if(input % 6 == 0){
    cout << "Your number, " << input << " is a multiple of 6!" << endl;

  }

  if(input % 5 == 0){
    cout << "Your number, " << input << " is a multiple of 5!" << endl;

  }

  if(input % 4 == 0){
    cout << "Your number, " << input << " is a multiple of 4!" << endl;

  }

  if(input % 3 == 0){
    cout << "Your number, " << input << " is a multiple of 3!" << endl;

  }

  if(input % 2 == 0){
    cout << "Your number, " << input << " is a multiple of 2!" << endl;

  }

  if(input % 1 == 0){
    cout << "Your number, " << input << " is a multiple of 1!" << endl;

  }
  
  cout << "Thank you for using the multiples calculator!" << endl << endl;


  return 0;
}
