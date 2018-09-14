/**
   Class and objects in C++
   Inline class
   Author: Caglar KOPARIR
   2018 (c) ckoparir@gmail.com
*/
#include <iostream>

using namespace std;

class inlineClass {
  int a, b;
 public:
  inlineClass(int x, int y);
  void show();
};

inline inlineClass::inlineClass(int x, int y) { a = x; b = y; }
inline void inlineClass::show() {
  cout << "A:" << a << endl;
  cout << "B:" << b << endl;
}

int main()
{
  inlineClass ic(20, 30);

  ic.show();

  
  return 0;
}
