#include<iostream>
using namespace std;
struct point
{
    int x,y;
};
int main()
{
    point p = {0,1};
    cout<<p.x<<endl;
    cout<<p.y<<endl;
    p.x = 99;
    cout<<p.x<<endl;
    return 0;
}
