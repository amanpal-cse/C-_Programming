#include<iostream>
using namespace std;
int main()
{
    int i;
    int arr[5] = {1,2,3,4,5};
    int count1 = 0,count2 = 0;
    for(i = 0; i < 5;i++)
    {
        if(arr[i] % 2 == 0){
        count1++;
        }
        else{
        count2++;
        }
    }
    cout<<"Even count:"<<count1<<endl;
    cout<<"Even count:"<<count2<<endl;
    return 0;

}

