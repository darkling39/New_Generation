#include <iostream>

using namespace std;

int main()
{
    int a = 50, b = 20, c = 0;
    c = a;
    a = b;
    b = c;
    cout << "a = " << a << endl << "b = " << b;
    return 0;
}
