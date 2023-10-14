#include <iostream>

using namespace std;

bool isIdentityMatrix(int mat[][100], int n) {

  // Check if all the elements of the main diagonal are 1
  for (int i = 0; i < n; i++) {
    if (mat[i][i] != 1) {
      return false;
    }
  }

  // Check if all the elements of the other diagonals are 0
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i != j && mat[i][j] != 0) {
        return false;
      }
    }
  }

  return true;
}

int main() {
  // Declare the matrix
  int n, mat[100][100];

  // Get the number of rows and columns of the matrix
  cout << "Enter the number of rows and columns of the matrix:\n";
  cin >> n;

  // Read the matrix elements
  cout << "Enter the elements of the matrix:\n";
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> mat[i][j];
    }
  }

  // Check if the matrix is an identity matrix
  bool isIdentity = isIdentityMatrix(mat, n);

  // Print the result
  if (isIdentity) {
    cout << "The matrix is an identity matrix.";
  } else {
    cout << "The matrix is not an identity matrix.";
  }

  return 0;
}
