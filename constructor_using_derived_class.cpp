#include <iostream>
using namespace std;

class Base {
protected:
    int a;

public:
    Base(int x) {
        a = x;
        cout << "Base class constructor called" << endl;
    }
};

class Derived : public Base {
    int b;

public:
    Derived(int x, int y) : Base(x) {
        b = y;
        cout << "Derived class constructor called" <<endl;
    }

    void display() {
        cout <<"Value of a = " << a <<endl;
        cout <<"Value of b = " << b <<endl;
        cout <<"Sum = " << a + b <<endl;
    }
};
int main() {
    Derived obj(10, 20);
    obj.display();

    return 0;
}