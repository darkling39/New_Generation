#include <iostream>
#include <string>

using namespace std;

int main()
{
    char String [256];
    cin.getline(String, 256);
    int t = 0;
    for(int i = 0; i < 256; i++)
    {
        if (String[i] == 'a' ||
            String[i] == 'e' ||
            String[i] == 'i' ||
            String[i] == 'o' ||
            String[i] == 'u' ||
            String[i] == 'y')
        {
            t++;
        }
        if (String[i] == ' ' || String[i] == 0)
        {
            if (t != 0)
            {
                cout << t << " ";
            }
            t = 0;
        }
        if (String[i] == 0)
        {
            break;
        }
    }

return 0;
}
