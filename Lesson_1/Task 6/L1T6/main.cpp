#include <iostream>

using namespace std;

int main()
{
    cout << "=========================================" << endl;
    cout << "Your network mask 255.255.255" << endl;
    cout << "Fill the mask by given numbers: 255, 254, 252, 248, 240, 224, 192, 128, 000" << endl;
    int full, number;
    cout << "255.255.255.";
    cin >> full;
    number = 256 - full;
    switch (full)
    {
    case 255:
        cout << "Your network mask 255.255.255." << full << endl 
             << "Avaliable ip = " << number << endl;
             cout << "=========================================" << endl;
        break;
    case 254:
        cout << "Your network mask 255.255.255." << full << endl 
             << "Avaliable ip = " << number << endl;
             cout << "=========================================" << endl;
        break;
    case 252:
        cout << "Your network mask 255.255.255." << full << endl 
             << "Avaliable ip = " << number << endl;
             cout << "=========================================" << endl;
        break;
    case 248:
        cout << "Your network mask 255.255.255." << full << endl 
             << "Avaliable ip = " << number << endl;
             cout << "=========================================" << endl;
        break;
    case 240:
        cout << "Your network mask 255.255.255." << full << endl 
             << "Avaliable ip = " << number << endl;
             cout << "=========================================" << endl;
        break;
    case 224:
        cout << "Your network mask 255.255.255." << full << endl 
             << "Avaliable ip = " << number << endl;
             cout << "=========================================" << endl;
        break;
    case 192:
        cout << "Your network mask 255.255.255." << full << endl 
             << "Avaliable ip = " << number << endl;
             cout << "=========================================" << endl;
        break;
    case 128:
        cout << "Your network mask 255.255.255." << full << endl 
             << "Avaliable ip = " << number << endl;
             cout << "=========================================" << endl;
        break;
    case 000:
        cout << "Your network mask 255.255.255." << full << endl 
             << "Avaliable ip = " << number << endl;
             cout << "=========================================" << endl;
        break;
    default:
        break;
    }
    return 0;
}
