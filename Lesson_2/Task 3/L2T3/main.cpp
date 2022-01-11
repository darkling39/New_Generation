#include <iostream>

using namespace std;

int main()
{
    int Size;
    cin >> Size;
    for(int y = 0; y < Size; y++)
    {
        for(int x = 0; x < Size; x++)
        {
            if(y != 0 && y != Size - 1 && x != 0 && x != Size - 1 )
            {
                cout << " ";
            }
            else
                cout << "*";
        }
        cout << endl;
    }
    return 0;
}
