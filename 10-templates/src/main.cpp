/**
   Templates and generic functions
   Author: Caglar KOPARIR
   2018(c) ckoparir@gmail.com
*/

#include <iostream>
#include <cstring>
#include <typeinfo>

using namespace std;

struct stPerson
{
  string name, sname;
  unsigned int age;
  void print() { cout << "struct print: " << name << " " << sname << endl; }
};


template<typename T> void getmember(const char *member)
{
  auto Type = typeid(member).name();
  
  cout << member << ": " << Type << endl;
}

template <typename T> struct type_of
{
  static const char* name() { static_assert(T::name == "", "You are missing a DECL_TYPE_NAME");  return " ";}
};


template <> struct type_of<int> { static const char* name() { return "integer";} };
template <> struct type_of<string> { static const char* name() { return "string";} };
template <> struct type_of<stPerson> { static const char* name() { return "struct";} };

template <typename T>
inline void f(std::initializer_list<T> initlist)
{
  for(auto n : initlist)
    cout << n << endl;
}

int main()
{
  stPerson p;

  p.name = "Randy";
  p.sname = "Rhoads";
  p.age = 26;

  cout << type_of<string>::name() << endl;

  f({'d','E','x','>','*','\n'});

  cout << offsetof(stPerson, age) << endl;
  getmember<stPerson>("sname");
  p.print();
  return 0;
}
