#include <iostream>

using namespace std;

int main()
{
    int num, sum = 0;
    cout << "Enter your number: ";
    cin >> num;
    while (num != 0)
    {
        sum = sum + num%10;
        num = num/10;
    }
    cout << "Count of digits = " << sum;
    return 0;
}
