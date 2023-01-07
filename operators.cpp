// operators

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter num1: ";
    cin >> a;
    cout << "Enter num2: ";
    cin >> b;
    
    // arithmetic operators (+, -, *, /, %, ++, --)
    cout << "Add: " << (a + b) << endl;
    cout << "Sub: " << (a - b) << endl;
    cout << "Multiplication: " << (a * b) << endl;
    cout << "Division: " << (a / b) << endl;
    cout << "Modulo: " << (a % b) << endl;

    int d = 10;

    cout << d++ << endl; // 10 -> 11
    cout << ++d << endl; // 12

    cout << d-- << endl; // 10 -> 9
    cout << --d << endl; // 8

    // assignment operator (=)
    int c = 9;

    // logical operators (<, >, &&, ||, ==, !=)
    cout << (a < b) << endl;
    cout << (a > b) << endl;
    cout << (a == b) << endl;
    cout << (a != b) << endl;

    // bitwise operator (&, |, ^)

    /*

    0 ^ 0 -> false(0)
    0 ^ 1 -> true(1)
    1 ^ 1 -> false(0)
    1 ^ 0 -> true(1)

    */

    return 0;
}