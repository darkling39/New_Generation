#include <iostream>
#include <cmath>

using namespace std;
int charToInt()
{

}
void sum(int num1, int num2)
{
    cout << num1+num2;
}

int main()
{
    int num1, num2;
    int maxLenth = 256;
    char equation[maxLenth];
    cin.getline(equation, maxLenth);
    for(int i = 0; i < maxLenth; i++)
    {
        if(equation[i] == '+')
        {

        }

    }
    sum(num1, num2);
    return 0;
}
