#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  double total1 = 2;
  double total2 = 422.2567;
  double total3 = -3;

  cout << "Here is how to format money: ";
  cout << setprecision(2) << fixed << showpoint << "$" << total1 << ", $" << total2 << endl;

  cout << "Notice the formatting remains on the next line:  $" << total3 << endl; 

  cout << "To clear the formatting we call restiosflags " << resetiosflags << " " << total3 << endl;

  cout << endl << "To organize everything nicely into even width columns, use setw() and left: " << endl;
  cout << left << setw(10) << "apple" << setw(7) << "donut" << setw(11) << "garbanzo" << "jelly" << endl;
  cout << left << setw(10) << "banana" << setw(7) << "egg" << setw(11) << "hamburger" << "karp" << endl;
  cout << left << setw(10) << "cucumber" << setw(7) << "fish" << setw(11) << "ice cream" << "lemonade" << endl;

  return 0;
}
