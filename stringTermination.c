#include <stdio.h>
#include <string.h>

int my_strlen(char *s)
{
  int count = 0;

  while (s[count] != '\0')
  {
    count++;
  }
  return count;

}

int main(void)
{
  char s[] = "Have you ever noticed that anybody driving slower than you is an idiot, and anyone going faster than you is a maniac?";
  int count = my_strlen(s);
  printf("The length of the string is %d\n", count);
  printf("The length of the string is %zu with the string termination included\n", sizeof(s));
  printf("The length of the string is %d using strlen()\n", strlen(s));
}


