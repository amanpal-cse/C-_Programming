#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5,6};
    int i,largest= arr[0];
    int second=arr[0];
    for(i = 0; i < 5;i++)
       {
        if(arr[i]>largest)
        {
            second = largest;
            largest = arr[i];
        }
       }
       cout<<"Second largest number is :"<<second;
       return 0;
}