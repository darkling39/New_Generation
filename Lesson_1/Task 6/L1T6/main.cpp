#include <iostream>

using namespace std;

int main()
{
    cout << "Fill the mask by given numbers: 255, 254, 252, 248, 240, 224, 192, 128, 000" << endl;
    int full, number;
    cin >> full;
    number = 256 - full;
    switch (full)
    {
        case 255:
             cout << "Avaliable ip = " << number << endl;
        break;
        case 254:
         
            cout << "Avaliable ip = " << number << endl;
              
        break;
         case 252:
         
            cout << "Avaliable ip = " << number << endl;
              
        break;
        case 248:
         
            cout << "Avaliable ip = " << number << endl;
              
        break;
        case 240:
         
            cout << "Avaliable ip = " << number << endl;
              
        break;
        case 224:
         
            cout << "Avaliable ip = " << number << endl;
              
        break;
        case 192:
         
            cout << "Avaliable ip = " << number << endl;
              
        break;
        case 128:
         
            cout << "Avaliable ip = " << number << endl;
              
        break;
        case 000:
         
            cout << "Avaliable ip = " << number << endl;
              
        break;
        default: cout << "Error: incorrect input";
        break;
    }
    return 0;
}
