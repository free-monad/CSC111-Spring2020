#include <iostream>

using namespace std;

int main()
{
  int numberOfApples;
  int numberOfPeople;

  cout << "Welcome to the apple dividing program. We guarantee everyone gets a fair amount!\n\n";

  cout << "How many people will be at the party?\n";
  cin >> numberOfPeople;

  cout << endl;

  cout << "How many apples do you have?\n";
  cin >> numberOfApples;

  cout << endl;

  cout << "You should give each attendee " << static_cast<double>(numberOfApples) / static_cast<double>(numberOfPeople) << " apples";

  cout << endl << endl;

  return 0;
}
