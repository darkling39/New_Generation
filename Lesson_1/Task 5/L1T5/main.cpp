#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cout << "Enter weight of the sheep: ";
    float full, weight, one_year;
    cin >> weight;
    one_year = round(weight/3) - 2;
    full = one_year*300;
    cout << "You have to find " << full << " liters of fuel";
    return 0;
}
