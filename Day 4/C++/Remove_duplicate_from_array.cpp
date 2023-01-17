#include <iostream>
using namespace std;

void arrayInput(int[], int);
void arrayOutput(int[], int);
int removeDuplicate(int[], int);

int main()
{
    int arraySize;
    cout << "Enter the size of the array: ";
    cin >> arraySize;

    int array[arraySize];
    cout << "Enter the elements of the array: " << endl;
    arrayInput(array, arraySize);

    cout << "Before removing duplicates, your array: ";
    arrayOutput(array, arraySize);

    arraySize = removeDuplicate(array, arraySize);

    cout << "After removing duplicates, your array: ";
    arrayOutput(array, arraySize);

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

int removeDuplicate(int array[], int arraysSize)
{
    int dup = 0, tempIndx = 1;
    for (int i = 0; i < arraysSize - 1; i++)
        if (array[i] == array[i + 1])
            dup++;

    for (int i = 1; i < arraysSize; i++)
        if (array[tempIndx - 1] != array[i])
        {
            array[tempIndx] = array[i];
            tempIndx++;
        }

    return arraysSize - dup;
}