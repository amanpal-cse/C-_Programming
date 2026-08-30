#include <iostream>
using namespace std;

class Second;

class First
{
    int a;
public:
    void getdata()
    {
        cout << "Enter first number: ";
        cin >> a;
    }
    void show()
    {
        cout << "First = " << a << endl;
    }
    friend void swap(First &, Second &);
};
class Second
{
    int b;
public:
    void getdata()
    {
        cout << "Enter second number: ";
        cin >> b;
    }
    void show()
    {
        cout << "Second = " << b << endl;
    }
    friend void swap(First &, Second &);
};

void swap(First &x, Second &y)
{
    int temp;
    temp = x.a;
    x.a = y.b;
    y.b = temp;
}
int main()
{
    First f;
    Second s;
    f.getdata();
    s.getdata();
    cout << "\nBefore Swapping:" << endl;
    f.show();
    s.show();
    swap(f, s);
    cout << "\nAfter Swapping:" << endl;
    f.show();
    s.show();
    return 0;
}