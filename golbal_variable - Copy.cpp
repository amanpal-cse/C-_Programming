#include<iostream>
using namespace std;
int x = 3;
int main()
{
    int x = 10; //local variable
    cout<<::x;
    return 0;

}