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

  // Check if the matrix is lower triangular
  bool isLowerTriangular = true;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i < j && mat[i][j] != 0) {
        isLowerTriangular = false;
        break;
      }
    }
  }

  // Print the result
  if (isLowerTriangular) {
    cout << "The matrix is a lower triangular matrix.";
  } else {
    cout << "The matrix is not a lower triangular matrix.";
  }

  return 0;
}
