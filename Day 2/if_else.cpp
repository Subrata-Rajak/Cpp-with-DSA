// if else statement

// integer -> input, integer - odd : odd, even : even 

//(input % 2 == 0) -> even ? odd

// even and less than 5 -> even : odd

// even and less than 5 -> even, odd and less than 5 -> odd, nothing

#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter the number: ";
    cin >> a;

    // if-else statement
    if((a % 2 == 0) && (a < 5)) { // true ->
        cout << "even" << endl;
    } else {
        cout << "odd";
    }

    // nested if-else statement
    if(a % 2 == 0) {
        if(a < 5) {
            cout << "even" << endl;
        }
    } else {
        cout << "odd" << endl;
    }

    // if-else and else if statement
    if((a % 2 == 0) && (a < 5)) {
        cout << "even" << endl;
    } else if((a % 2 != 0) && (a < 5)) {
        cout << "odd" << endl;
    } else {
        cout << "nothing";
    }

    return 0;
}