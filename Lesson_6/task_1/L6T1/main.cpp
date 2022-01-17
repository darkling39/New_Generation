#include <iostream>
#include <string>

using namespace std;
class Caesar
{
    private:
    string input;
    int key = 0;
    string result;
    public:
        Caesar()
        {

        }
        Caesar(string inputTxt)
        {
            cin >> inputTxt;
            input = inputTxt;
        }
        Caesar(string inputTxt, int keyValue)
        {
            cin >> keyValue;
            key = keyValue;
            cin >> inputTxt;
            input = inputTxt;
        }
        void setKey(int keyValue)
        {
            cout << "Enter the KEY" << endl;
            cin >> keyValue;
                while(keyValue == 0)
                {
                    cout << "Error, no key" << endl;
                    cout << "Enter key again" << endl;
                    cin >> keyValue;
                    key = keyValue;
                }
            key = keyValue;
        }
        int getKey(){return key;}
        void setInput()
        {
            cout << "Enter text" << endl;
            cin >> input;
        }
        void setInput(string inputValue)
        {
            input = inputValue;
        }
        string getInput(){return input;}
        string getResult() {return result;}
};



string code(int keyValue, string inputValue)
{
    for(int i = 0; i < inputValue.size(); i++)
    {
        inputValue[i] = inputValue[i] + keyValue;
    }
    return inputValue;
}
string decode(int keyValue, string inputValue)
{
    for(int i = 0; i < inputValue.size(); i++)
    {
        inputValue[i] = inputValue[i] - keyValue;
    }
    return inputValue;
}

Caesar decision(Caesar starter)
{
    int dec;
    cout << "What would you like to do with text?" << endl
         << "Code - 1" << endl
         << "Decode - 2" << endl;
    cin >> dec;
    if (dec == 1)
    {
        starter.setInput(code(starter.getKey(), starter.getInput()));
        cout << starter.getInput();
    }
    else
    {
        starter.setInput(decode(starter.getKey(), starter.getInput()));
        cout << starter.getInput();
    }
}


int main()
{
    int KEY, dec;
    Caesar start;
    start.setKey(KEY);
    start.setInput();
    decision(start);
    return 0;
}
