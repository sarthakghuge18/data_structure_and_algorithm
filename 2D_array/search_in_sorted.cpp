/*
Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:

Integers in each row are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to bottom
*/

#include <iostream>
using namespace std;

// check the element is present or not

bool searchMatrix(int matrix[][3], int r, int c, int target)
{

    int row = r;
    int col = c;

    int rowindex = 0;
    int colindex = col - 1;

    while (rowindex < row && colindex >= 0)
    {

        int element = matrix[rowindex][colindex];

        if (element == target)
        {
            return 1;
        }

        if (element < target)
        {
            rowindex++;
        }
        else
        {
            colindex--;
        }
    }
    return 0;
}

int main()
{

    // declare 2D array
    int arr[3][3];

    // taking input
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    // displaying array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // taking element to find
    int target;
    cout << "enter the element to search : ";
    cin >> target;

    // check elemnt is found or not
    if (searchMatrix(arr, 3, 3, target))
    {
        cout << "element found";
    }
    else
    {
        cout << "element not found ";
    }
}