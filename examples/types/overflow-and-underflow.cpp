#include <iostream>
#include <limits>
#include <iomanip>

using namespace std;

int main()
{
  int imax = numeric_limits<int>::max();
  int imin = numeric_limits<int>::min();

  short smax = numeric_limits<short>::max();
  short smin = numeric_limits<short>::min();

  unsigned int umax = numeric_limits<unsigned int>::max();
  unsigned int umin = numeric_limits<unsigned int>::min();

  int ioverflow = imax;
  int iunderflow = imin;

  short soverflow = smax;
  short sunderflow = smin;

  unsigned int uoverflow = umax;
  unsigned int uunderflow = umin;

  cout << "Values before incrementing and decrementing: " << endl << endl;

  cout << setw(11) << "ioverflow" <<
	  setw(11) << "iunderflow" <<
	  setw(16) << "soverflow" <<
	  setw(11) << "sunderflow" <<
	  setw(16) << "uoverflow" <<
	  setw(11) << "uunderflow" << endl;

  cout << setw(11) << ioverflow <<
	  setw(11) << iunderflow <<
	  setw(16) << soverflow <<
	  setw(11) << sunderflow <<
	  setw(16) << uoverflow <<
	  setw(11) << uunderflow << endl << endl;

  cout << "Values after incrementing and decrementing: " << endl << endl;

  cout << setw(11) << "ioverflow" <<
	  setw(11) << "iunderflow" <<
	  setw(16) << "soverflow" <<
	  setw(11) << "sunderflow" <<
	  setw(16) << "uoverflow" <<
	  setw(11) << "uunderflow" << endl;

  cout << setw(11) << ++ioverflow <<
	  setw(11) << --iunderflow <<
	  setw(16) << ++soverflow <<
	  setw(11) << --sunderflow <<
	  setw(16) << ++uoverflow <<
	  setw(11) << --uunderflow << endl << endl;




  return 0;
}
