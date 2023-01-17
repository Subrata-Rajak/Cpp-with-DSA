#include <iostream>
using namespace std;

void myReverse(string &);
void mySwap(char &, char &);

int main()
{
    string str;
    cout << "Enter your string: ";
    cin >> str;

    cout << "Before Reverse: " << str << endl;
    myReverse(str);
    cout << "After Reverse: " << str << endl;

    return 0;
}

void mySwap(char &a, char &b)
{
    char temp = a;
    a = b;
    b = temp;
}

void myReverse(string &str)
{
    int len = str.length();
    int leftPointer = 0, rightPointer = len - 1;

    while (leftPointer < rightPointer)
    {
        mySwap(str[leftPointer], str[rightPointer]);
        leftPointer++;
        rightPointer--;
    }
}