# include<iostream>
using namespace std;

void reverse_arr(int ar[100], int n);
 
int main()
{
 
    int n, arr[100];

    cout << "Enter the size of the array: " << endl;
    cin >> n;
    cout << "Enter the element: " << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Original array: " << endl;
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    reverse_arr(arr, n);

    return 0;
}

void reverse_arr(int ar[100], int n)
{
    int temp;

    for(int i = 0; i < n/2; i++)
    {
        temp = ar[i];
        ar[i] = ar[n-1-i];
        ar[n-i-1] = temp;
    }

    cout << "Reverse of the given array: " << endl;
    for(int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
    cout << endl;
}