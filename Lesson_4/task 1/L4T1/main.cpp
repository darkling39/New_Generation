#include <iostream>
#include <string>
using namespace std;

int main()
{
    int cnt = 0;
    string arr;
    getline(cin, arr);
    for(int i = 1; i < arr.size(); i++)
    {
        if(arr[i] == '!' || arr[i] == '"' || (arr[i] >= ',' && arr[i] <= '.') || arr[i] == ':' || arr[i] == ';' || arr[i] == '?')
            cnt++;
    }
    cout << cnt;
    return 0;
}
