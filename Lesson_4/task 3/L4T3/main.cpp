#include <iostream>

using namespace std;

int main()
{
    int arrSize = 140;
    char input[arrSize], output[arrSize];
        int val;
        cin >> val;
        for(int i = 0; i < arrSize; i++)
        {
            cin >> input[i];
            output[i] = input[i] - val;
            cout << output[i];
        }
    return 0;
}
