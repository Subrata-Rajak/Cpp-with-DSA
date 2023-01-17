#include <iostream>
using namespace std;

void arrayInput(int[], int);
void arrayOutput(int[], int);
int findLargestElement(int[], int);

int main()
{
    int arraySize;
    cout << "Enter the size of the array: ";
    cin >> arraySize;

    int array[arraySize];
    cout << "Enter the elements of the array: " << endl;
    arrayInput(array, arraySize);

    cout << "The largest element in your array is: " << findLargestElement(array, arraySize) << endl;

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

int findLargestElement(int array[], int arraySize)
{
    int largest = -1;

    for (int i = 0; i < arraySize; i++)
        if (array[i] > largest)
            largest = array[i];

    return largest;
}