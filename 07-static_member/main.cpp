/**
   Static class members
   Author: Caglar KOPARIR
   2018(c) ckoparir@gmail.com
*/
#include <iostream>

using namespace std;

class shared {
  int x;
  static int y;
 public:
  shared() { x = 0; y = 0;}
  void set(int a, int b) { x = a; y = b; }
  void show();
};

int shared::y;
void shared::show() {
  cout << "\tnon-static (x):\t" << x << endl;
  cout << "\tstatic (y):\t"     << y << endl;
  cout << endl;
}

int main()
{
  shared c1, c2;

  cout << "c1 members has been assigned to 1\n";
  c1.set(1, 1);
  c1.show();

  cout << "c2 members has been assigned to 2\n";
  c2.set(2, 2);
  c2.show();

  cout << "The last state of c1 members:\n";
  c1.show();
  
  return 0;
}
