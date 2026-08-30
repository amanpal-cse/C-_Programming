#include <iostream>
using namespace std;
class Rectangle
{
    int l, b;
public:
    void input()
    {
        cin >> l >> b;
    }
    void area()
    {
        cout << l * b << endl;
    }
};
int main()
{
    Rectangle r[2];
    for(int i=0; i<2; i++)
    {
        r[i].input();
        r[i].area();
    }
    return 0;
}