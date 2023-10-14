#include <iostream>
using namespace std;

int main()
{
  int arr[50], size, i, delElem, count = 0;

  cout << "Enter the size of an array: ";
  cin >> size;

  cout << "Enter array elements:\n";
  for (i = 0; i < size; i++)
    cin >> arr[i];

  cout << "\nEnter element to be delete: ";
  cin >> delElem;

  for (i = 0; i < size; i++)
  {
    if (arr[i] == delElem)
    {
      for (int j = i; j < (size - 1); j++)
      {
        arr[j] = arr[j + 1];
      }

      count++;
      break;
    }
  }

  if (count == 0)
  {
    cout << "\nElement not found..!!\n";
  }
  else
  {
    cout << "New Array:\n";
    for (i = 0; i < (size - 1); i++)
      cout << arr[i] << " ";
  }


  return 0;
}

