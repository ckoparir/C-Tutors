/**
   Exercise in c++
   Author: Caglar KOPARIR
   2018(c) ckoparir@gmail.com
*/

#include <iostream>
using namespace std;

void clrscr(int size=10) {
  for (; size; size--) cout << endl;
}

void indent(char *str, int size) {

  if(size < 0) size = 0;
  for (; size; size--) {
    cout<<" ";
  }
  cout<<str<<endl;
}

int main()
{
  int row, col;
  char sign = '*';
  const int size = 30;
  char str[size]=" ";
  const int mid = size/2;

  for (row=0; row<mid-1; row++)
  {
    for(col=0; col<size-1; col++)
    {
      if( ( mid - (col + row) <= 0 ) && ( mid - (col - row) >= 0 ) )
        str[col] = sign;
      else
        str[col] = ' ';
    }

    cout<<str<<endl;
  }
  return 0;
}
