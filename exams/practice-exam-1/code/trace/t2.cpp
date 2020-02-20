#include <iostream>
using namespace std;


bool r1(char &g, char &h){

  static int q = 0;

  cout << "q: " << q << endl;
  q++;

  if(g != ' ' || h != ' '){
    cout << "inside if" << endl;
  } else if (g != h){
    cout << "inside else if" << endl;
  } else {
    cout << "inside else" << endl;
  }

  if(g == 'A'){
    cout << "inside 2nd if" << endl;

    if(h == 'B'){
       cout << "inside nest if" << endl;
    } else {
       cout << "inside nest else" << endl;
    }
  }
  
  char s = g;
  g = h;
  h = s;

  return g == h;
}


int main(){

  char s = '#';

  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 2; j++){
      cout << s;
    }
    cout << endl;
  }

  char g = ' ';
  char h = 'p';

  cout << r1(g, h) << endl;

  cout << "g: " << g << endl 
       << "h: " << h << endl
       << "s: " << s << endl; 

  char n = 'A';
  char m = 'C';

  cout << r1(n, m) << endl; 

  return 0;
}
