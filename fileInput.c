#include <stdio.h>

int main(void)
{
  FILE *fp;
  fp = fopen("hello.txt", "r");

  int c = fgetc(fp);
  // why an int instead of char? Because of EOF(End of File) which isn't a character proper, and its value likely falls outside the range of char
  // Since fgetc() needs to be able to return any byte and EOF, it needs to be a wider type than char so that in can hold more values
  printf("%c\n", c);
  while((c = fgetc(fp)) != EOF)
  {
    printf("%c\n",c);
  }

  fclose(fp);
  fp = fopen("quote.txt", "r");
  char s[1024]; //Big enough for any line this program will encounter
  int linecount = 0;

  while (fgets(s, sizeof s, fp) != NULL)
    printf("%d: %s\n", ++linecount, s);

  fclose(fp);
}
