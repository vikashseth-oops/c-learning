#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string operation;
    double number1, number2;
    cout << "enter the number1 : " << endl;
    cin >> number1;
    cout << "enter the operation(+, -, *, /)" << endl;
    cin >> operation;
    cout << "enter the number2 : " << endl;
    cin >> number2;

    if (operation == "+")
    {
        cout << number1 + number2;
    }
    else if (operation == "-")
    {
        cout << number1 - number2;
    }
    else if (operation == "*")
    {
        cout << number1 * number2;
    }
    else if (operation == "/")
    {
        cout << number1 / number2;
    }
    else
    {
        cout<<"not recognised operation";
    }
    return 0;
}