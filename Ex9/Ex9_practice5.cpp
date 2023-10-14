# include<iostream>
using namespace std;
 
void array_sum(int ar1[100], int ar2[100], int n);

int main()
{
 
    int ar1[100], ar2[100], n;

    cout << "Enter the size of the array: " << endl;
    cin >> n;
    cout << "Enter the element for the first array: " << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> ar1[i];
    }
    cout << "Enter the element for the second array: " << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> ar2[i];
    }
 
    array_sum(ar1, ar2, n);

    return 0;
}

void array_sum(int ar1[100], int ar2[100], int n)
{
    for(int i = 0; i < n; i++)
    {
        ar1[i] = ar1[i] + ar2[i];
    }

    cout << "Sum of the given two array: " << endl;
    for(int i = 0; i < n; i++)
    {
        cout << ar1[i] << " ";
    }
    cout << endl;
}