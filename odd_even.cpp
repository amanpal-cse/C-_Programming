#include<iostream>
using namespace std;
int main()
{
    int i;
    int arr[5] = {1,2,3,4,5};
    for(i = 0; i < 5;i++)
    {
        if(arr[i] % 2 == 0)
        cout<<"Even :"<<arr[i];
        else
        cout<<"odd :"<<arr[i];
    }
    return 0;

}

