#include <stdio.h>

int main(void){
  char s[] = "Whoever established the high road and how high it should be should be fired. — Sandra Bullock";
  int len = sizeof(s);
  printf("The total size of the string is %zu\n", sizeof(s));
  printf("The total size of Character is %zu\n", sizeof(char));
  printf("The number of characters is %d\n",len);
  for (int i = 0; i < len; i++){
    printf("%c\n",s[i]);
  }

} 
