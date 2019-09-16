#include <stdio.h>
void parandrome()
{
    int number;
    printf("\n\nEnter an integer: ");
    scanf("%d", &number);
    // True if the number is perfectly divisible by 2
    if(number % 2 == 0)
        printf("%d is even.", number);
    else
        printf("%d is odd.", number);
   // return 0;
}
