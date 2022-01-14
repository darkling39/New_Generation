#include <iostream>
#include <math.h>

using namespace std;
struct root
{
    double sol1;
    double sol2;
};


root setValue(double x1, double x2)
{
    root first = {x1, x2};
    return first;
}


void Print (root solution)
{
    cout << solution.sol1 << endl
         << solution.sol2;
}


void algo(double a, double b, double c)
{
    double disc, x1, x2;
    disc = pow(b, 2) - 4*a*c;
    if(disc > 0)
    {
        x1 = ((-b) + sqrt(disc)) / 2*a;
        x2 = ((-b) - sqrt(disc)) / 2*a;
        Print(setValue(x1,x2));
    }
    if(disc == 0)
    {
        x1 = x2;
        x1 = -b / 2*a;
        Print(setValue(x1,x2));
    }
    if (disc < 0)
    {
        cout << "NO SOLUTION";
    }
}
double algo(double a, double b)
{
    double c = 0, disc, x1, x2;
    disc = pow(b, 2) - 4*a*c;
    if(disc > 0)
    {
        x1 = ((-b) + sqrt(disc)) / 2*a;
        x2 = ((-b) - sqrt(disc)) / 2*a;
        Print(setValue(x1,x2));
    }
    if(disc == 0)
    {
        x1 = -b / 2*a;
        x2 = x1;
        Print(setValue(x1,x2));
    }
    if (disc < 0)
    {
        cout << "NO SOLUTION";
    }
}

void decision(double a, double b, double c)
{
    int d = 0;
    cout << "How many variables do you want?" << endl
         << "Print 3 for 3 variables" << endl
         << "Print 2 for 2 variables" << endl;
    cin >> d;
    if(d == 2)
    {
        cin >> a;
        cin >> b;
        algo(a, b);
    }
    else
    {
        cin >> a;
        cin >> b;
        cin >> c;
        algo(a,b,c);
    }
}


int main()
{
    double a, b, c;
    decision(a, b, c);
    return 0;
}
