#include <iostream>

using namespace std;
void DrawLTrin(int k, int Size)
{
    for(int i = 0; i < k-Size; i++)
        {
            cout << "*";
        }
}

void DrawPenek(int k)
{
for(int d = 0; d < k; d++)
    {
    cout << " ";
    }
    cout << "*";
}

void DrawRTrin(int k, int Size)
{
    for(int i = 0; i < k-Size+1; i++)
        {
            cout << "*";
        }
}

void DrawSpaceTrin(int Size)
{
    for(int i =0; i < Size; i++)
        {
            cout << " ";
        }
}

void DrawTop(int k, int Size)
{
    for(int t = 0; t < k; t++)
    {
        DrawSpaceTrin(Size);
        DrawRTrin(k, Size);
        DrawLTrin(k, Size);
      
    Size--;
    cout << endl;
    }
}

void DrawSnowTree(int k, int Size)
{
    DrawTop(k, Size);
    DrawPenek(k);
}


int GetK(int Size)
{
    int k = Size;
    return k;
}
void SetSize(int Size)
{
 cin >> Size;
}


int main(){
    int Size;
    cin >> Size;
    DrawSnowTree(GetK(Size), Size);
    return 0;
}
