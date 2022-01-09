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
            if (String[i] == 97 ||
                String[i] == 101 ||
                String[i] == 105 ||
                String[i] == 111 ||
                String[i] == 117 ||
                String[i] == 121)
            {
                t++;
            }
            if (String[i] == 32 || String[i] == 0)
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
   /*string input;
        if(String[i-1] == 32 && (String[i] >= 97 && String[i] <= 122))
        {

        }
            if (String[i] == 97 || String[i] == 101)
            {
                c++;
                cout << c << " ";
            }
   int t = 0;
   cin >> input;
   for(int i = 1; i < input.size(); i++)
   {
        if (input[i] == )
            && (input[i] >= 97 && input[i] <= 122))
        {
            t++;
        }
   }
   cout << t;*/
    return 0;
}
