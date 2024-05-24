#include <stdio.h>

//define a structure for complex number 

typedef struct complexNumber {

    int real;
    int imag;
} complex;

//prototypes

complex add(complex x, complex y);



int main() {

//define three complex characters
complex a,b,sum;

//first complex number
a.real = 2;
a.imag = 5;

//second complex number
b.real = 4;
b.imag = 5;

//print the first complex number
printf("\n a = %d + %di", a.real, a.imag);

//print the second complex number
printf("\n b = %d + %di", b.real, b.imag);

//call add(a,b) function and 
// pass complex numbers a & b
// as an parameter

sum = add(a,b);

//print result
printf("\n sum = %d + %di", sum.real, sum.imag);


}

complex add(complex x , complex y) {

//define a new complex number
complex add;

add.real = x.real + y.real;

add.imag = x.imag + y.imag;

return(add);

}