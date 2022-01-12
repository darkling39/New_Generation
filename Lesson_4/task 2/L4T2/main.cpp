#include <iostream>

using namespace std;

int main()
{

    char str1[256], str2[256];
  cout << "Enter 2 sentences: " << endl;
  cin.getline(str1, 256);
  cout << endl;
  cin.getline(str2, 256);
  for(int i = 0; i < 256; i++)
  {
      if(str1[i] == str2[i])
      {
          cout << "hi" << " ";
          break;
      }
      else
      {
          cout << "Not hi" << " ";
          break;
      }
  }
    return 0;
}
