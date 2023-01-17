#include <iostream>
using namespace std;

void arrayInput(int[], int);
void arrayOutput(int[], int);
int findSecondLargest(int[], int);

int main()
{
    int arraySize;
    cout << "Enter the size of the array: ";
    cin >> arraySize;

    int array[arraySize];
    cout << "Enter the elements of the array: " << endl;
    arrayInput(array, arraySize);

    cout << "Second largest element of your array: " << findSecondLargest(array, arraySize) << endl;

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

int findSecondLargest(int array[], int arraySize)
{
    int greatest = array[0], secondGreatest = -1;

    for (int i = 0; i < arraySize; i++)
    {
        if (array[i] != greatest)
        {
            if (array[i] > greatest)
            {
                secondGreatest = greatest;
                greatest = array[i];
            }
            else if (array[i] < greatest && array[i] > secondGreatest)
                secondGreatest = array[i];
        }
    }

    return secondGreatest;
}