#include <stdio.h>


int main() {


 int a;
printf("Please enter the number  ");
scanf("%d",&a);

if (a > 0)
printf("%d the number is positive ", a);
else if (a < 0)
printf("%d the number is negative ", a);
else if (a ==0)
printf("%d is zero ", a);

return 0;

}