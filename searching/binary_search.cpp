#include <iostream>
using namespace std;

int binary_search(int arr[], int key, int size)
{

    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2; //mid = (start + (end - start)/2)  optimize code 

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            cout << "The key present at index : " << mid;
            return mid;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = (start + end) / 2;
    }
    cout << "The key is not present in array ";
}

int main()
{

    int arr[6] = {1, 2, 3, 4, 5, 6};

    int key = 5;

    binary_search(arr, key, 6);
    return 0;
}