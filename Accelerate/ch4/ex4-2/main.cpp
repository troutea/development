#include <cmath>
#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
    for (int i = 1;  i <= 100; i++ )
        cout << setw(6) << i << setw(9) << i * i << endl;

    return 0;
}
