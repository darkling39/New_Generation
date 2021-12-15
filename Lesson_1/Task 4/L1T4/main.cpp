#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    cout << "Enter three numbers" << endl;
    float a, b, c, D, x1 = 0, x2 = 0, x3 = 0;
    cin >> a;
    cin >> b;
    cin >> c;
    D = pow(b, 2) - 4*a*c;
    if(D > 0)
    {
        x1 = (-b + sqrt(D))/2;
        x2 = (-b - sqrt(D))/2;
        cout << "Result : " << endl 
        << "X1 = " << x1 << endl 
        << "X2 = " << x2 << endl; 
    }
    if (D < 0)
    {
        cout << "Discriminator is negative";
    }
    if(D == 0)
    {
        x3 = -b/2*a;
        cout << "Result :" << endl << "X = " << x3;
    }
    return 0;
}
