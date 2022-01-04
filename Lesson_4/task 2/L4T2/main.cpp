#include <iostream>

using namespace std;

int main()
{

    char str1[256], str2[256];
  cout << "Enter 4 sentences: " << endl;
  cin.getline(str1, 256, ';');
  cout << endl;
  cin.getline(str2, 256, ';');


    /*char str1[256], str2[256];
    cin.getline(str1,);
    getline(cin, str2);
    for(int i = 0; i < str.size(); i++)
    {
        if(str1[i] == str2[i])
            cout << "you have 2 same strings";
        else
            cout << "there are some differences";
    }*/
    return 0;
}
