#include <stdio.h>

int main ()
{
  int i = 1;
  int loop = 50;
//  while ( i <= loop){
//    if (i%3==0 && i%5 == 0 ){
 //     printf("fizzbuzz\n");
 //   } else if (i%5== 0) {
 //     printf("buzz\n");
 //   } else if (i%3==0){
 //     printf("fizz\n");
 //   } else {
 //     printf("%d\n",i);
 //   }
 //   i++;
 // }
  //
  for(i=1; i<loop; i++){
    if (i % 3 == 0 && i % 5 == 0){
      printf("fizzbuzz\n");
    }else if (i % 5 == 0){
      printf("buzz\n");
    } else if ( i % 3 == 0){
      printf("fizz\n");
    } else {
      printf("%d\n",i);
    }
  }
}
