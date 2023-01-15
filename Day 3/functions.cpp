#include <iostream>
using namespace std;

/*
There are three pillars or steps to execute a function properly

1. function declaration
2. function body
3. function call

*/

void printHelloWorld(); // function declaration (this is a function without arguments)
int sum(int a, int b); // function with arguments

int main()
{
    printHelloWorld(); // function call (here you invoke the function)

    int d = sum(3, 4);
    cout << d << endl; // you can store the returned value in another variable and then print it

    /*
    in-built functions:
    swap(int, int);
    abs(int);
    printf(...)
    */

    // cout << sum(3, 4) << endl; -> or you can simply call the function and print the returned value
    return 0;
}

void printHelloWorld() // user defined function
{
    cout << "Hello World" << endl;
} // function body (here you write down the logic of your function)

int sum(int a, int b) // user defined function
{
    int c = a + b;
    return c;
}

/*
Prototype of a function: 

void printHelloWorld ()
{

}

void -> return type
printHelloWorld -> function name
() -> arguments

*/