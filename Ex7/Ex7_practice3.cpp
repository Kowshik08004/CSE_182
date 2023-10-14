#include<iostream>

using namespace std;
int main()
{
   int arr[50], even=0, odd=0, i, n;
   cout<<"Enter the size of the array: ";
   cin>>n;
   cout<<"Enter Array Elements:\n";
   for(i=0; i<n; i++)
      cin>>arr[i];
   for(i=0; i<n; i++)
   {
      if(arr[i]%2==0)
         even++;
      else
         odd++;
   }
   cout<<"\nTotal Number of even Numbers = "<<even;
   cout<<"\nTotal Number of Odd Numbers = "<<odd;
   cout<<endl;
   return 0;
}
