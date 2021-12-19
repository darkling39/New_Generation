#include <iostream>

using namespace std;

int main()
{
    int num, sum = 0, def;
    cout << "Enter your number: ";
    cin >> num;
    def = num;
    while (def != 0)
    {
        sum = sum + def%10;
        def = def/10;
    }
    cout << "Count of digits = " << sum;
    return 0;
}
