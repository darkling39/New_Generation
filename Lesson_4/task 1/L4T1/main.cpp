#include <iostream>
#include <string>
using namespace std;

int main()
{
    int cnt = 0;
    string arr;
    getline(cin, arr);

    for(int i=1;i<arr.size();i++)
    {
        if(arr[i] == 33 || arr[i] == 34 || (arr[i] >= 44 && arr[i] <= 46) || arr[i] == 58 || arr[i] == 59 || arr[i] == 63)
            cnt++;
    }

    cout << cnt;

    /*int arrSize = 20, cnt = 0;
    char arr[arrSize];
    for(int i = 0; i < arrSize; i++)
    {
        cin >> arr[i];
        if(arr[i] == 33 || arr[i] == 34 || (arr[i] >= 44 && arr[i] <= 46) || arr[i] == 58 || arr[i] == 59 || arr[i] == 63)
        {
            cnt++;
        }
        if(arr[i] == 0)
            break;
    }
    cout << endl;
    cout << cnt;*/
    return 0;
}
