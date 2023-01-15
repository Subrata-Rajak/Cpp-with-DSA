#include <iostream>
using namespace std;

int main()
{
    string a;
    getline(cin, a); // it takes space also as an input

    cin >> a; // only takes what comes before space

    cout << a << endl;

    string one = "Subrata ";
    string two = "Rajak";

    string three = one + two; // concatenation

    cout << three;
    return 0;
}
