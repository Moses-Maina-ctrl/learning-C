/* Hello World Program */ 

#include <stdio.h>  // Anything that starts with pound($) or hash(#) is something the preprocessor operates on before the compiler even get started 
#include <stdbool.h>
// #include is a preprocessor directive
// #include tells preprocessor to pull the contents of another file and insert it into the code right there
// .h is header file
// stdio.h is the Standard I/O header file
//

int main(void)
{
  int i = 2;
  float f = 3.14;
  float double_pi = i * f;
  char *s = "Equation"; // char * ("char pointer") is the string type
  printf("%s: %d x %f = %f ", s, i, f, double_pi);
  printf("Moses Maina is cool, haha\n");
  bool x = false;
} 
