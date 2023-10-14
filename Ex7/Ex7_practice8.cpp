#include<iostream>
using namespace std;
int main()
{
    int arr[50], i, elem, n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter Array Elements:\n";
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cout<<"Enter Element to Insert: ";
    cin>>elem;
    arr[n] = elem;
    cout<<"The New Array is:\n";
    for(i=0; i<(n+1); i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
    return 0;
}
