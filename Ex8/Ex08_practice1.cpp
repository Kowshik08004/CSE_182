#include<iostream>
using namespace std;
int main()
{
    int matOne[3][3], matTwo[3][3], matAdd[3][3], i, j;
    cout<<"Enter 9 Elements for First Matrix:\n";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            cin>>matOne[i][j];
    }
    cout<<"Enter 9 Elements for Second Matrix:\n";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            cin>>matTwo[i][j];
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            matAdd[i][j] = matOne[i][j] + matTwo[i][j];
    }
    cout<<"\nThe New Matrix is:\n";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            cout<<matAdd[i][j]<<"  ";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
