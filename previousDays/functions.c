#include <stdio.h>

int add(int n, int a)
{
  return n+a;
}

int main(void) // Functions that take NO PARAMETER should really have  a `void` in there ALWAYS
{
  int i = 10;
  int x = 20;
  
  printf("i==%d\n", add(i,x));
}
