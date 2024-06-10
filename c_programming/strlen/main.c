#include <stdio.h>


int stringLength(const char string[]);

int main() {

const char array[] = "This is an array";

printf("The array is: %s", array);

}


int stringLength(const char string[]) {

int count = 0;

while (string[count] != '\n')
   ++count;

   return count;

}