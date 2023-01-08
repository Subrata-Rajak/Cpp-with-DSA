// loop

/*
For loop
while loop
do-while loop
*/

#include <iostream>
using namespace std;

int main()
{
    // infinite for loop
    for (int a = 0; a < 5; a--) // i-- -> i - 1
    {
        cout << a << endl;
    }

    // healthy for loop
    for (int subrata = 0; subrata < 5; subrata++) // i-- -> i - 1
    {
        cout << subrata << endl;
    }

    // while
    int i = 0; // starting point

    while(i < 5) { // condition
        i++; // iteration method
        cout << i << endl;
    }

    // do-while loop
    int j; // starting point
    cout << "Enter the number: ";
    cin >> j;

    do {
        cout << j << endl;
        j++; // iteration method
    } while (j < 2); // condition

    return 0;
}