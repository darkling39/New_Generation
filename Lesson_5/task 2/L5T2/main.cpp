#include <iostream>

using namespace std;


void SetZero(int Size, int Accs[], int PINs[])
{
    for(int i = 0; i < Size; i++)
    {
        PINs[i] = 0;
        Accs[i] = 0;
    }
}

void Pin(int Size, int acc, int PINs[], int pin)
{
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
}
void balance(int Size, int Accs[], int acc)
{
    for(int i = 0; i < Size; i++)
        {
            if (i == acc-1)
            {
                cout << "Available money: " << Accs[i] << endl;
            }
        }
}
void ifOne(int chose, int value, int Size, int Accs[], int acc)
{
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
}

void ifTwo(int chose, int value, int Size, int Accs[], int acc)
{
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
}

int main()
{
    int Size = 10, acc, pin;
    int Accs [Size];
    int PINs [Size];
    SetZero(Size, Accs, PINs);
    /*for(int i = 0; i < Size; i++)
    {
        PINs[i] = 0;
        Accs[i] = 0;
    }*/
    while(true)
    {
        int chose = 0, value = 0;
        cout << "Bank account: ";
        cin >> acc;
        Pin(Size, acc, PINs, pin);
        /*for(int i = 0; i < Size; i++)
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
        }*/
        balance(Size, Accs, acc);
        /*for(int i = 0; i < Size; i++)
        {
            if (i == acc-1)
            {
                cout << "Available money: " << Accs[i] << endl;
            }
        }*/
        cout << "Press 1 to add money: "    << endl
             << "Press 2 to withdraw money" << endl;
        cin >> chose;
        ifOne(chose, value, Size, Accs, acc);
        /*if (chose == 1)
        {
            cout << "Value: ";
            cin >> value;
            for(int i = 0; i < Size; i++)
            {
                if (i == acc-1)
                {
                    Accs[i] = value;
                }
            }
        }*/
        ifTwo(chose, value, Size, Accs, acc);
        /*if (chose == 2)
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
                        Accs[i] = Accs[i] - value;
                }
            }
        }*/
    }
    return 0;
}
