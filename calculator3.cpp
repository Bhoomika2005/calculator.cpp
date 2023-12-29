#include <iostream>
using namespace std;
int main()
{
    float num1, num2;
    char oper;
    cout << "enter the operator:";
    cin >> oper;
    cout << "enter two numbers:";
    cin >> num1 >> num2;

    switch (oper)
    {
    case '+':
        cout << num1 << "+" << num2 << "=" << (num1 + num2);
        break;
    case '-':
        cout << num1 << "-" << num2 << "=" << (num1 - num2);
        break;
    case '*':
        cout << num1 << "*" << num2 << "=" << (num1 * num2);
        break;
    case '/':
        if (num2 != 0.0)
            cout << num1 << "/" << num2 << "=" << (num1 / num2);
        else
            cout << "can't say";
        break;

    default:
        cout << oper << "invalid operator!";
    }
    return 0;
}
