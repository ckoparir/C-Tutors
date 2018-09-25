/**
   Virtual functions and polymorhism
   Author: Caglar KOPARIR
   2018(c) ckoparir@gmail.com
*/
#include <iostream>

using namespace std;

class base
{
 public:
  // pure virtaul function declaration
  virtual void show() = 0;
  //virtual function
  virtual void func() { cout << "This is base func()\n"; }
};

// has no overloaded func() 
class derived1 : virtual public base
{
 public:
  void show() { cout << "derived1 show()\n"; }
  //void func() { cout << "This is derived1 func()\n"; }
};

class derived2 : virtual public base, virtual public derived1
{
 public:
  void show() { cout << "derived2 show()\n"; }
  void func() { cout << "This is derived2 func()\n"; }
};

// function with base reference parameter
void fc(base &r)
{
  r.func();
}

int main()
{
  base *ptr;
  derived1 d1;
  derived2 d2;

// assign d1 to base pointer
  ptr = &d1;
  ptr->func();
  ptr->show();

  // assign d2 to base pointer
  ptr = &d2;
  ptr->func();
  ptr->show();
  
  //function calls passed d1 & d2 object to fc()
  fc(d1);
  fc(d2);
  
  return 0;
}
