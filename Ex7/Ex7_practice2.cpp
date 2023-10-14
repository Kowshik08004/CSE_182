#include<iostream>

using namespace std;
int main()
{
   int i, arr[50], large, second_large, n;
   cout<<"Enter the size of the array: ";
   cin>>n;
   cout<<"Enter Array Elements: ";
   for(i=0; i<n; i++)
      cin>>arr[i];
   large = arr[0];
   for(i=0; i<n; i++)
   {
      if(large<arr[i])
         large = arr[i];
   }
   second_large = arr[0];
   for(i=0; i<n; i++)
   {
      if(second_large<arr[i])
      {
         if(arr[i]!=large)
            second_large = arr[i];
      }
   }
   cout<<"\nSecond Largest Element = "<<second_large;
   cout<<endl;
   return 0;
}

