#include <iostream>
using namespace std;

int main()
{
    int array[5] = {10, 20, 30, 40, 50}; // array declaration and initialization

    // accessing array elements using index operator
    cout << &(array[0]) << endl;
    cout << &(array[1]) << endl;
    cout << &(array[2]) << endl;
    cout << &(array[3]) << endl;
    cout << &(array[4]) << endl;

    // same as the above 5 lines (implemented using for loop for better readability)
    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << " ";
    }

    int arrayTwo[7];

    for (int i = 0; i < 7; i++)
    {
        cin >> arrayTwo[i];
    } // user input in array

    for (int i = 0; i < 7; i++)
    {
        cout << arrayTwo[i] << " ";
    } // output

    return 0;
}