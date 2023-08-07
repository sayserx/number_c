#include <stdio.h>

int main() 
{
    int number;
    int number2;
    printf("number: ");
    scanf("%d", &number);
    printf("number2: ");
    scanf("%d", &number2);
    printf("Your number is: %d", number*number2);
    return 0;
}