#include <iostream>
using namespace std;

void rotate(int arr[][3], int r, int c)
{

    // transpose the array
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }

    // reverse the each row
    for (int i = 0; i < r; i++)
    {
        int start = 0;
        int end = c - 1;
        while (start < end)
        {
            swap(arr[i][start], arr[i][end]);
            start++;
            end--;
        }
    }
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
    cout<<"Before rotate : "<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


    //calling the main function 
    rotate(arr,3,3);

    cout<<"After rotate : "<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    
}