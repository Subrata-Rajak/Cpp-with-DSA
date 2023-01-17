#include <iostream>
using namespace std;

void arrayInput(int[], int);
void arrayOutput(int[], int);
bool isSorted(int[], int);

int main()
{
    int arraySize;
    cout << "Enter the size of the array: ";
    cin >> arraySize;

    int array[arraySize];
    cout << "Enter the elements of the array: " << endl;
    arrayInput(array, arraySize);

    if (isSorted(array, arraySize))
        cout << "Your array is sorted" << endl;
    else
        cout << "Your array is not sorted" << endl;

    return 0;
}

void arrayInput(int array[], int arraySize)
{
    for (int i = 0; i < arraySize; i++)
        cin >> array[i];
}

void arrayOutput(int array[], int arraySize)
{
    for (int i = 0; i < arraySize; i++)
        cout << array[i] << " ";

    cout << endl;
}

bool isSorted(int array[], int arraySize)
{   
    for (int i = 0; i < arraySize - 1; i++)
        if (array[i] > array[i + 1])
            return false;

    return true;
}