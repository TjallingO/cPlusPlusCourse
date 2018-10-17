// Main file

#include "main.ih"

int main()
{
  int square[DIM][DIM]; // Declare square 2D array

  int (*row)[DIM] = square;  // Define row as pointing to rows of 2D array

  inv_identity(row);  // Pass row to function
  // printArray(square); // Only for testing purposes
}
