#include <iostream>

using namespace std;

int main() {
  // Declare the matrix
  int n, mat[100][100];

  // Get the number of rows and columns of the matrix
  cout << "Enter the number of rows and columns of the matrix: ";
  cin >> n;

  // Read the matrix elements
  cout << "Enter the elements of the matrix:\n";
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> mat[i][j];
    }
  }

  // Initialize the sum
  int sum = 0;

  // Find the sum of the upper triangular elements
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      sum += mat[i][j];
    }
  }

  // Print the sum
  cout << "The sum of the upper triangular elements is: " << sum << endl;

  return 0;
}
