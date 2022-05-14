#include <iostream>
using namespace std;

int calculate(int a, int b, char op) {
    int result;
    switch (op)
    {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        result = a / b;
        break;
    default:
        cout << "Invalid Operator" << endl;
        break;
    }
    return result;
}

int main(void) {
    int a, b, result = 0;
    char op;

    cout << "Enter a number: " << endl;
    cin >> a;
    cout << "Enter the operator: " << endl;
    cin >> op;
    cout << "Enter a number: " << endl;
    cin >> b;

    result = calculate(a,b,op);
    cout << "Result = " << result << endl;
    return 0;
}
