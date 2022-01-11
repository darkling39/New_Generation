#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    getline(cin, input);
    for(int i = 0; i < input.size(); i++)
    {
        if (input[i] == 'f' &&
            input[i+1] == 'u' &&
            input[i+2] == 'c' &&
            input[i+3] == 'k')
        {
            input[i] = '*';
            input[i+1] = '*';
            input[i+2] = '*';
            input[i+3] = '*';
        }
    }
    cout << input;
    return 0;
}
