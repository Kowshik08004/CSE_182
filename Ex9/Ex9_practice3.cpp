# include<iostream>
using namespace std;

int large_elem(int ar[100], int n);

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

    cout << "Largest element: " << large_elem(arr, n) << endl;

    return 0;
}

int large_elem(int ar[100], int n)
{
    int temp;
    
    for(int i = 0; i < n-1; i++)
    {
        if(ar[i] > ar[i+1])
        {
            temp = ar[i];
            ar[i] = ar[i+1];
            ar[i+1] = temp;
        }
    }

    return ar[n-1];
}