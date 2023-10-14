#include <iostream>

using namespace std;

int main() {
  // Initialize the matrix size
  int n;
  cout << "Enter the matrix size: ";
  cin >> n;

  // Create a 2D array to store the matrix elements
  int matrix[n][n];

  // Read the matrix elements from the user
  cout << "\nPlease Enter the Items:\n";
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> matrix[i][j];
    }
  }

  // Initialize the sum of the minor diagonal elements
  int sum = 0;

  // Iterate over the matrix and add the minor diagonal elements to the sum
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i + j == n - 1) {
        sum += matrix[i][j];
      }
    }
  }

  // Print the sum of the minor diagonal elements
  cout << "The sum of the minor diagonal elements is: " << sum << endl;

  return 0;
}
