#include<iostream>
using namespace std;

int main()
{
	int i, j, rows, columns, number;

	cout << "\nPlease Enter the Matrix rows and Columns:\n";
	cin >> i >> j;

	int scalarMulArr[i][j], multi[i][j];

	cout << "\nPlease Enter the Matrix Items:\n";
	for(rows = 0; rows < i; rows++)	{
		for(columns = 0; columns < i; columns++) {
			cin >> scalarMulArr[rows][columns];
		}
	}

	cout << "\nPlease Enter the Multiplication Value: ";
 	cin >> number;

	for(rows = 0; rows < i; rows++)
  	{
  		for(columns = 0; columns < j; columns++)
  		{
  			multi[rows][columns] = number * scalarMulArr[rows][columns];
		}
  	}

 	cout << "\nThe Result of a Scalar Matrix Multiplication is :\n";
	for(rows = 0; rows < i; rows++)
  	{
  		for(columns = 0; columns < j; columns++)
  		{
  			cout << multi[rows][columns] << " ";
		}
		cout << "\n";
  	}

 	return 0;
}
