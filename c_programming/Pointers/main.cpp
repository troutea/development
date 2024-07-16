#include <iostream>

using namespace std;



int main() {

int x = 10;
int *myptr;

//storing the address of x in pointer myptr
myptr = &x;

cout << "Value of x is: ";
cout << x << endl;

cout << "Address stored in myprt is: ";
cout << myptr << endl;

//printing value of x using pointer myptr

cout << "Value of x using *myptr is: ";
cout << *myptr << endl;





}