#include <iostream>

using namespace std;

void coutSpace()
{
    cout << " ";
}

void coutStar()
{
    cout << "*";
}


void choose(int y, int x, int Size)
{
    if(y != 0 && y != Size - 1 && x != 0 && x != Size - 1 )
    {
        coutSpace();
    }
    else
        coutStar();
}

void loopEverything(int Size)
{
    for(int y = 0; y < Size; y++)
    {
        for(int x = 0; x < Size; x++)
        {
            choose(y, x, Size);

        }
        cout << endl;
    }
}

int main()
{
    int Size;
    cin >> Size;
    loopEverything(Size);
    return 0;
}
