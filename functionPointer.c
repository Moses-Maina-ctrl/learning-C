#include <stdio.h>

int twice(int *x) // defines t
{
  *x = *x * 2; //dereference this is the actual value not the pointer
}

int main(void)
{
  int i = 30;
  int *j = &i; //note this is not a dereference-- this is a type "int*"
  // pointer j is points to i, j holds address of i


  printf("i is now %d\n", i);
  printf("i is also %d\n",*j);
  printf("The pointer to i is %p\n", j);
  twice(j); //j is an int* of i

  printf("double of i is %d\n",i);

}
