#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int arrSize = 4, sum1 = 0, sum2 = 0, t = 1000;
    srand(static_cast<unsigned int>(time(0)));
    int arr1 [arrSize];
    int arr2 [arrSize];
    for (int i = 0; i < arrSize; i++)
    {
        arr1[i] = rand() % 10;
        arr2[i] = rand() % 10;
    }
    for (int i = 0; i < arrSize; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < arrSize; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < arrSize; i++)
    {
        arr1[i] = arr1[i] * t;
        arr2[i] = arr2[i] * t;
        sum1 = sum1 + arr1[i];
        sum2 = sum2 + arr2[i];
        t = t/10;
    }
    cout << sum1 << " + " << sum2 << " = " << sum1 + sum2;
    return 0;
}
