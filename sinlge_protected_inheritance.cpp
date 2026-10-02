#include <iostream>
using namespace std;

class B // base class
{
protected:
    int a; // protected member

public:
    int b;

    void get_ab();
    void show_a();
};

class D : public B
{
    int c;

public:
    void mul();
    void display();
};

void B::get_ab()
{
    a = 5;
    b = 10;
}

void B::show_a()
{
    cout << "a = " << a << "\n";
}

void D::mul()
{
    c = a * b; // D directly access kar sakti hai because a is protected
}

void D::display()
{
    cout << "a = " << a << "\n";
    cout << "b = " << b << "\n";
    cout << "c = " << c << "\n";
}

int main()
{
    D d;

    d.get_ab();
    d.mul();
    d.show_a();
    d.display();

    d.b = 20;
    d.mul();
    d.display();

    return 0;
}
