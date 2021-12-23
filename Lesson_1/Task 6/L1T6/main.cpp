#include <iostream>

using namespace std;

int main()
{
    cout << "Fill the mask: 255.255.255.";
    int full, number;
    cin >> full;
    number = 256 - full;
    cout << number; 
    return 0;
}
