#include <iostream>
#include <algorithm>
using namespace std;

bool areAnagram(string, string);

int main()
{
    string str1, str2;
    cout << "Enter String 1: ";
    cin >> str1;
    cout << "Enter String 2: ";
    cin >> str2;

    if (areAnagram(str1, str2))
        cout << str1 << " and " << str2 << " are anagrams" << endl;
    else
        cout << str1 << " and " << str2 << " are not anagrams" << endl;

    return 0;
}

bool areAnagram(string str1, string str2)
{
    int n1 = str1.length();
    int n2 = str2.length();

    if (n1 != n2)
        return false;

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    for (int i = 0; i < n1; i++)
        if (str1[i] != str2[i])
            return false;

    return true;
}