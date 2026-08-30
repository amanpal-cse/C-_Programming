#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {1,2,3,4,5};
    int i,min=arr[0];
    for(i = 0; i < 5;i++)
    {
    if(arr[i] < min)
       min = arr[i];
    }
cout<<"Minimum = "<<min<<endl;
return 0;

}
