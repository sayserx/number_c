#include <stdio.h>

int main() {
  int number;
  int i;
  printf("number: ");
  scanf("%d", &number); 
  for (i = 0; i < 13; i++) {
     printf("%d * %d = %d \n", number,i,number*i);
  }
}