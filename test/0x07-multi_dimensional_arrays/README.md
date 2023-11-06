# Multi-dimensional arrays:

Mental Model for 2D Arrays:
- Think of a grid
- The first index is for the rows
- The second is for the columns

Example:
arr[2][3]
2D array with 2 rows and 3 columns

-------------------------------

Mental Model for 3D Arrays:
- Think of a table within a room
- The first index is for the tables
- The second is for the rows
- The third is for the columns

Example:
arr[1][2][3]
3D array with 1 table, 2 rows and 3 columns

-------------------------------

Formula for calculating position at a specific row and column:
# Applies only for 2D arrays (assuming zero-based indexing)

Position = (row_index * number_of_columns) + column_index

Example:
arr[2][3]
Position = (2 * 3) + 3 = 9; // Incorrect if assuming zero-based indexing
Position = (1 * 3) + 3 = 6; // Correct if assuming zero-based indexing

Note: Formula for determining number of elements in a multi-dimensional array is (rows * indices)

-------------------------------
init_2d_array.c
Out: init_2d_array
- Declares and initializes a 2d array separately
- Initializes 2d array using for loops
Note: %3d - the 3 is like padding (play around with different values)