#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {5, 2, 8, 1, 6};

    int min = arr[0];
    int second = arr[1];

    for(int i = 0; i < 5; i++)
    {
        if(arr[i] < min)
        {
            second = min;
            min = arr[i];
        }
        else if(arr[i] < second && arr[i] != min)
        {
            second = arr[i];
        }
    }
    cout << "Second Minimum = " << second;
    return 0;
}