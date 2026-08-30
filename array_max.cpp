#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {1,2,3,4,5};
    int i,max=arr[0];

    for(i = 0; i < 5;i++)
    {
    if(arr[i]>max)
        max = arr[i];
    }
    cout<<"Maximum = "<< max<<endl;

return 0;

}

