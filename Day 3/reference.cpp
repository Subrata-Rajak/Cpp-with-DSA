#include <iostream>
using namespace std;

void passByValue(int a, int b) // pass by value
{
    a++;
    b++; // change in a, b will not reflect in the main function

    cout << "Variables in any func: ";
    cout << a << " " << b << endl; // output -> 6 6
}

// write a function to swap the value of two variables
void mySwap(int &a, int &b) // pass by reference
{
    int temp = a;
    a = b;
    b = temp; // change in a, b will reflect in main function
}

int main()
{
    int num1 = 10;
    int &referenceVariableToNum1 = num1; // that's how you create a reference variable with the '&' operator

    cout << referenceVariableToNum1 << endl; // output -> 10

    // int &referenceVariable2 = 10; -> this is wrong, you can't assign literals or constants to a reference variable you only can assign another existing variable in that scope

    // code for pass by value example
    int a = 5, b = 5;
    passByValue(a, b); // function called

    cout << "Variables in main function: " << a << " " << b << endl; // though the function is called the values of a and b are not updated. It'll output -> 5 5

    // code for pass by reference example
    int x = 5, y = 4;
    cout << "Before swap: ";
    cout << x << " " << y << endl;

    mySwap(x, y);

    cout << "After swap: ";
    cout << x << " " << y << endl;
    return 0;
}
