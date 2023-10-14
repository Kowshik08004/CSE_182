#include <iostream>
using namespace std;


int main()
{
    int arr[50], n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter Array Elements:\n";
    for(int i=0; i<n; i++)
      cin>>arr[i];

    cout <<"Unique elements of the said array: ";
    for (int i=0; i<n; i++)
    {
        int j;
        for (j=0; j<i; j++)
           if (arr[i] == arr[j])
               break;
         if (i == j)
          cout << arr[i] << " ";
    }
    return 0;
}
