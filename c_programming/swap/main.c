#include <stdio.h>

int main(){

int x,y;

printf("\nEnter Value of x ");
scanf("%d", &x);
printf("\Enter Value of y ");
scanf("%d", &y);

int temp = x;

x = y;

y = temp;

printf("\nAfter Swapping: x = %d, y = %d", x,y);
return 0;


}