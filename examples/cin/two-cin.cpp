#include <iostream>
using namespace std;

int main()
{
  double rate, hours;

  cout << "Enter your hourly rate and how many hours you worked: ";
  cin >> rate >> hours;

  cout << endl << endl << "You worked for " << hours << " hours at a rate of $" << rate <<
	  " per hour for a total of $" << rate * hours << "!" << endl;
  return 0;
}
