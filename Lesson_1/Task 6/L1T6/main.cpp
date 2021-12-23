#include <iostream>

using namespace std;

int main()
{
    cout << "Fill the mask by given numbers: 255, 254, 252, 248, 240, 224, 192, 128, 000" << endl;
    int full, number;
    cin >> full;
    number = 256 - full;
    cout << number;
    return 0;
}
