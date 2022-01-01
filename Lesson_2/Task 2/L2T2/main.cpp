#include <iostream>

using namespace std;

int main()
{
    cout << "Enter Hash" << endl;
    int hash, def, rem1, rem2, sum = 0, last, first;
    cin >> hash;
    def = hash;
    last = def % 10;
    while (def != 0)
    {
        rem1 = def % 10;
        rem2 = (def / 10) % 10;
        if (rem1 == rem2)
        {
            sum = sum + rem1;
        }
        def = def / 10;
    }
    if (rem2 == 0)
    {
        first = rem1;
    }
    if (first = last)
    {
        sum = sum + first;
    }
    cout << sum;
    return 0;
}
