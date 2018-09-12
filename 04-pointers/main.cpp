/**
   Function pointers in c++
   Author: Caglar KOPARIR
   2018(C) ckoparir@gmail.com
*/
#include <iostream>

void Print(int repeat, const char* str,
           int(*prn)(const char* __restrict__ format ...)) {
  for (int i = 0; i < repeat; ++i) {
    (*prn)(str);
    putchar('\n');
  }
}

int main()
{
  char str[] = "Test message...";
  int (*p)(const char* __restrict__ format ...);

  p = printf;

  Print(10, str, p);
  return 0;
}
