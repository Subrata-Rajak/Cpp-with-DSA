#include <iostream>
using namespace std;

// function declaration
void pointers();
void mySwap(int *, int *); // you don't need to write the name of the arguments in the function declaration

int main()
{
    int x = 5;

    // address of operator (&)
    cout << &x << endl; // gives you the memory address of that variable

    // dereference operator (*)
    cout << *(&x) << endl; // gives you the value at that memory address

    // pointers(); // just a function call to increase the readability of code

    // code for the swap function
    int num1 = 4, num2 = 6;
    cout << "Before Swap: " << endl
         << "Num1: " << num1 << ", "
         << "Num2: " << num2 << endl;

    int *pointerToNum1 = &num1, *pointerToNum2 = &num2; // create pointer variables
    mySwap(pointerToNum1, pointerToNum2);               // pass them when you are calling the function

    cout << "After Swap: " << endl
         << "Num1: " << num1 << ", "
         << "Num2: " << num2 << endl;
    return 0;
}

void pointers()
{
    int x = 5;
    int *y = &x; // that's how you create a pointer variable

    cout << "memory address of x: " << &x << endl;
    cout << "Value of x: " << x << endl;
    cout << "memory address of y: " << &y << endl;
    cout << "value of y: " << y << endl;
}

void mySwap(int *a, int *b) // that's how you pass pointer to a function
{
    int temp = *a;
    *a = *b;
    *b = temp;
}