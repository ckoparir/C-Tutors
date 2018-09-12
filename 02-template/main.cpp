/**
   Template in c++11
   Author: Caglar KOPARIR
   2018(C) ckoparir@gmail.com
*/
#include <iostream>

using namespace std;

template <typename T>
string binPrint(const T* data, int size) {
  string str;
  for(int i=size-1; i>=0; i--) {
    for(int j=7; j>=0; j--) {
      str += ((data[i] >> j) & 1) == 0 ? '0' : '1';
    }
  }
  return str;
}

int main()
{
  unsigned char v = 10;
  cout << binPrint(&v, sizeof(v)) << endl;
  
  return 0;
}
