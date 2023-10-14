#include<iostream>
using namespace std;

int main()
{
	int i, j, rows, columns, isEqual;

	cout << "Please Enter the rows and Columns:\n";
	cin >> i >> j;

	int a[i][j], b[i][j];

	cout << "\nPlease Enter the First Matrix Items:\n";
	for(rows = 0; rows < i; rows++)	{
		for(columns = 0; columns < i; columns++) {
			cin >> a[rows][columns];
		}
	}
	cout << "\nPlease Enter the Second Matrix Items:\n";
	for(rows = 0; rows < i; rows++)	{
		for(columns = 0; columns < i; columns++) {
			cin >> b[rows][columns];
		}
	}

	isEqual = 1;
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0; columns < j; columns++)
    	{
      		if(a[rows][columns] != b[rows][columns])
			{
			  	isEqual = 0;
			  	break;
			}
   	 	}
  	}
 	if(isEqual == 1)
 	{
 		cout << "\nTwo matrices are Equal.";
	}
	else
	{
		cout << "\nTwo matrices are Not Equal.";
	}

 	return 0;
}

