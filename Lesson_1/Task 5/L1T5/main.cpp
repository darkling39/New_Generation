#include <iostream>
#include <math.h>

using namespace std;



float ForOneYear()
{
    cout << "Enter weight of the sheep: ";
    float weight, one_year;
    cin >> weight;
    one_year = round(weight/3) - 2;
    return one_year;
}
float ForThreHundredYears()
{
    float full;
    full = ForOneYear()*300;
    return full;
}





int main()
{
    float full;
    full = ForOneYear()*300;
    cout << "You have to find " << full << " liters of fuel";
    return 0;
}
