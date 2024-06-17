#include <stdio.h>


int main(void)
{
  int x[24];

  printf("total number of bytes of array x is %zu bytes \n", sizeof x);
  printf("The size of an int is %zu bytes \n", sizeof(int));
  printf("The length of an x is %zu bytes \n", sizeof x / sizeof(int));



}
