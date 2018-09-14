/**
   Class and objects in C++
   friend class
   Author: Caglar KOPARIR
   2018 (c) ckoparir@gmail.com
*/
#include <iostream>

using namespace std;

const int INUSE = 0;
const int IDLE  = 1;

class C2;   // forward declaration

class C1 {
  int status;
 public:
  C1() { status = IDLE; }
  void set_status(int state);
  friend int is_idle(C1 a, C2 b);
};

class C2 {
  int status;
 public:
  C2() { status = IDLE; }
  void set_status(int state);
  friend int is_idle(C1 a, C2 b);
};

void C1::set_status(int state) {
  status = state;
}

void C2::set_status(int state) {
  status = state;
}

int is_idle(C1 a, C2 b) {
  if( a.status && b.status ) {
    cout << "Screens can be used...\n";
    return IDLE;
  }
  else {
    cout << "Screens are in use!\n";
    return INUSE;
  }
} 

int main()
{
  C1 c1;
  C2 c2;

  is_idle(c1, c2);

  c2.set_status(INUSE);
  cout << "State has been changed...\n";

  is_idle(c1, c2);
  
  return 0;
}
