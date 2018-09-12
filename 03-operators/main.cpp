/**
   Operator function definitions
   Author: Caglar KOPARIR
   2018(C) ckoparir@gmail.com
*/
#include <iostream>

using namespace std;

string operator-=(string& left, const string& right) {
  string::size_type i;
  i = left.find(right);
  if(i != string::npos)
    left.erase(i, right.size());

  return left;
}

int main()
{
  string str = "This is test message...";

  str -= "test ";
  cout << str << endl;
  
  return 0;
}

