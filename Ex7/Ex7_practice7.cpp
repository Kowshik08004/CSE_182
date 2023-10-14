#include <iostream>
using namespace std;
int main(){
    int arr[50], n , temp;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter Array Elements:\n";
    for(int i=0; i<n; i++)
        cin>>arr[i];
    for(int i = 0; i<n/2; i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}
