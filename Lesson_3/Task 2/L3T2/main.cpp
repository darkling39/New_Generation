#include <iostream>

using namespace std;

int main()
{
    int Size = 10, acc, pin;
    int Accs [Size];
    int PINs [Size];
    for(int i = 0; i < Size; i++)
    {
        PINs[i] = 0;
        Accs[i] = 0;
    }
    while(true)
    {
        int chose = 0, value = 0;
        cout << "Bank account: ";
        cin >> acc;
        for(int i = 0; i < Size; i++)
        {
            if (i == acc-1)
            {
                if(PINs[i] == 0)
                {
                    cout << "Set PIN: ";
                    cin >> pin;
                    PINs[i] = pin;
                }
                else
                {
                    while(true)
                    {
                        cout << "Enter PIN: ";
                        cin >> pin;
                        if (pin == PINs[i])
                            break;
                        else
                            cout << "Error: Incorrect PIN" << endl;
                    }
                }
            }
        }
        for(int i = 0; i < Size; i++)
        {
            if (i == acc-1)
            {
                cout << "Available money: " << Accs[i] << endl;
            }
        }
        cout << "Press 1 to add money: "    << endl
             << "Press 2 to withdraw money" << endl;
        cin >> chose;
        if (chose == 1)
        {
            cout << "Value: ";
            cin >> value;
            for(int i = 0; i < Size; i++)
            {
                if (i == acc-1)
                {
                    Accs[i] += value;
                }
            }
        }
        if (chose == 2)
        {
            cout << "Value: ";
            cin >> value;
            for(int i = 0; i < Size; i++)
            {
                if (i == acc-1)
                {
                    if (Accs[i] < value)
                        cout << "Error: You don`t have enough money" << endl;
                    else
                        Accs[i] -= value;
                }
            }
        }
        /*for(int i = 0; i < Size; i++)
        {
            cout << Accs[i] << " ";
        }
        cout << endl;
        for(int i = 0; i < Size; i++)
        {
            cout << PINs[i] << " ";
        }
        cout << endl;*/
    }
    return 0;
}
