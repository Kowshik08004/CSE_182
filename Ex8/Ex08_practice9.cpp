#include <iostream>

using namespace std;

int main() {
  // Declare the matrix
  int n, m, mat[100][100];

  // Get the number of rows and columns of the matrix
  cout << "Enter the number of rows and columns of the matrix:\n";
  cin >> n >> m;

  // Read the matrix elements
  cout << "Enter the elements of the matrix:\n";
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> mat[i][j];
    }
  }

  // Initialize the number of zeros
  int num_zeros = 0;

  // Count the number of zeros in the matrix
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (mat[i][j] == 0) {
        num_zeros++;
      }
    }
  }

  // Check if the matrix is sparse
  bool isSparse = (num_zeros > (n * m) / 2);

  // Print the result
  if (isSparse) {
    cout << "The matrix is sparse.";
  } else {
    cout << "The matrix is not sparse.";
  }

  return 0;
}
