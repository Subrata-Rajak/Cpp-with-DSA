#include <iostream>
using namespace std;

void myReverse(string &);
bool isPalindrome(string);

int main()
{
    string str;
    cout << "Enter your string: ";
    cin >> str;

    if (isPalindrome(str))
        cout << str << " is a palindrome";
    else
        cout << str << " is not a palindrome";

    return 0;
}

bool isPalindrome(string str)
{
    int len = str.length();
    int leftPointer = 0, rightPointer = len - 1;

    while (leftPointer < rightPointer)
    {
        if (str[leftPointer] != str[rightPointer])
            return false;

        leftPointer++;
        rightPointer--;
    }

    return true;
}
