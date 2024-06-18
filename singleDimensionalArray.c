#include <stdio.h>

// passing as a pointer to the first element 
void times2(int *a, int len)
{
  for (int i =0; i < len; i++)
  {
    printf("2 times %d is %d\n",a[i], a[i] *2);
  }
}

// Same thing, but using array notation
void times3(int a[], int len)
{
  for (int i =0; i < len; i++)
  {
    printf("3 times %d is %d\n",a[i], a[i]*3);
  }
}

// Same thing but using array notation with size
void times4(int a[5], int len)
{
  for (int i = 0; i < len; i++)
  {
    printf("4 times %d is %d\n", a[i], a[i] * 4);
  }
}

int main(void){
  int x[5] = {11, 22, 33, 44, 55}; 
  // When you declare the array x[5] the name of array ('x') represent the address of the first element of the array
  
  int len = sizeof(x) / sizeof(int);

  times2(x, len);
  times3(x, len);
  times4(x, len);
}
