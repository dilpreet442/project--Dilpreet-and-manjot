#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "Simple Calculator\n";
    cout << "-----------------\n";
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "\nResult: ";

    switch (op) {
        case '+':
            cout << num1 + num2;
            break;
        case '-':
            cout << num1 - num2;
            break;
        case '*':
            cout << num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                cout << num1 / num2;
            else
                cout << "Error! Division by zero.";
            break;
        default:
            cout << "Invalid operator!";
            break;
    }

    cout << endl;
    return 0;
}
