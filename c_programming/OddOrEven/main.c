#include <stdio.h>

void checEvenOdd(int N) {

int r = N % 2;

if (r == 0) {
    printf ("Even");
}
else
{
    printf("odd");
}

}


int main() {

int N = 103;
checEvenOdd(N);

return 0;
     
}