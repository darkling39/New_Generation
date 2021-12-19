#include <iostream>

using namespace std;

int main()
{
    int Size;
    cin >> Size;
    for(int i = 0; i < Size; i ++)
    {
        cout << "*";
    }
    cout << endl;
    for(int i = 0; i < Size - 2; i ++)
    {
        cout << "*";
        for(int t = 0; t < Size - 2; t ++)
        {
            cout << " ";
        }
        cout << "*";
        cout << endl;
    }
    for(int i = 0; i < Size; i ++)
    {
        cout << "*";
    }
    return 0;
}
