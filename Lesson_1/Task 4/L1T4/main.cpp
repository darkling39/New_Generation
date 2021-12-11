#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    cout << "Enter three numbers" << endl;
    float a, b, c, D, x1 = 0, x2 = 0, x3 = 0;
    int flag = 0;
    cin >> a;
    cin >> b;
    cin >> c;
    D = pow(b, 2) - 4*a*c;
    if(D > 0)
    {
        flag = 1;
        x1 = (-b + sqrt(D))/2;
        x2 = (-b - sqrt(D))/2;
    }
    if (D < 0)
    {
        flag = 2;
    }
    if(D == 0)
    {
        flag = 3;
        x3 = -b/2*a;
    }
    if (flag == 1)
    cout << "Result : " << endl 
    << "X1 = " << x1 << endl 
    << "X2 = " << x2 << endl; 
    if (flag == 2)
    cout << "Discriminator is negative";
    if (flag == 3)
    cout << "Result :" << endl << "X = " << x3;
    return 0;
}
