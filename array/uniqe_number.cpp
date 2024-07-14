#include <iostream>
using namespace std;

int main()
{

    int arr[9] = {2, 3, 4, 5, 6, 3, 4, 2, 5};

    int ans = 0 ;
    for (int i = 0; i < 9; i++)
    {
        ans = ans ^ arr[i]; //xor operation a ^ a = 0 , a ^ 0 = a;
    }

    cout<<"unique number is  : "<<ans<<endl;
}