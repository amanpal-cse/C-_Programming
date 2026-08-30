#include<iostream>
using namespace std;
class A
{
    public:
    static int x;

};
int A :: x = 1;
int main()
{
    cout<<A::x;
    return 0;

}