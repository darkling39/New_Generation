#include <iostream>

using namespace std;

int main()
{
    int code = 0, value;
    cin >> value;
    for (int cntVal = value; cntVal != 0; cntVal /= 10)
    {
        if (cntVal%10 == cntVal/10%10)
            code += cntVal%10;
        if (cntVal == value%10)
            code += cntVal;
    }
    cout << code;
    return 0;
}
