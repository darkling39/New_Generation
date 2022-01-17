#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    /*
    1) Понять первое число
    2) Понять второе число
    3) Преобразовать новое выражение
    */
    string equation;
    cin >> equation;
    int numbers[equation.size()];
    for(int i = 0; i < equation.size(); i++)
    {
        numbers[i] = 0;
    }
    for(int i = 0; i < equation.size(); i++)
    {
        if (equation[i] > 48 && equation[i] < 57)
        {
            numbers[i] = equation[i] - '0';
        }
    }
     for(int i = 0; i < equation.size(); i++)
    {
        cout << numbers[i];
    }
    cout << endl;
    for(int i = 0; i < equation.size(); i++)
    {
        if(numbers[i] == 0 && numbers[i+1] != 0)
        {
            for(int t = 0; t < i; t++)
            {

            }
        }
    }
    return 0;
}
