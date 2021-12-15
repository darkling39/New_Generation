#include <iostream>

using namespace std;

int main()
{
    int Size = 10, arr[Size], ask;
    for (int i = 0; i < Size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter plus-number: ";
    cin >> ask;
    for (int i = 0; i < Size; i++)
    {
        arr[i] = arr[i] + ask;
    }
    for (int i = 0; i < Size; i++) {cout << arr[i] << " ";}

    return 0;
}
