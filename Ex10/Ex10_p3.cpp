#include <iostream>
using namespace std;

void Sort(int *arr, int size)
{
    for (int i = 0; i < size; ++i)
    {
        for (int j = i + 1; j < size; ++j)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};

    cout << "Original Array: ";
    for (int i = 0; i < 7; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    Sort(arr, 7);

    cout << "Sorted Array: ";
    for (int i = 0; i < 7; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
