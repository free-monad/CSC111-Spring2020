#include <iostream>
#include <cstdlib> //contains rand and srand
#include <ctime> //to get system time

using namespace std;

int main()
{
  unsigned int s = time(0); //current time

  srand(s); //seeds the random number generator

  cout << "1st random: " << rand() << endl;
  cout << "2nd random: " << rand() << endl;

  const int DICE_MIN = 1;
  const int DICE_MAX = 6;

  cout << "1st dice roll: " << (rand() % (DICE_MAX - DICE_MIN + 1)) + DICE_MIN << endl;
  cout << "2nd dice roll: " << (rand() % (DICE_MAX - DICE_MIN + 1)) + DICE_MIN << endl; 

  return 0;
}
