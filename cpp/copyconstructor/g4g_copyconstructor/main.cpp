#include <iostream>
#include "point.h"

using namespace std;

int main()
{
    Point p1(10,15);

    Point p2 = p1;


    cout << p1.getX() << endl;
    cout << p1.getY() << endl;
    cout << p2.getX() << endl;
    cout << p2.getY() << endl;
    cout << "Hello world!" << endl;
    return 0;
}
