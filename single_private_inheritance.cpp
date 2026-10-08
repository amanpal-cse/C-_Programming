#include <iostream>
using namespace std;

class B
{
    int a;

public:
    int b;

    void get_ab();
    int get_a();
    void show_a();
};

class D : private B
{
    int c;

public:
    void mul();
    void display();
};

// Function to input values of a and b
void B::get_ab()
{
    cout << "Enter values of a and b: ";
    cin >> a >> b;
}

// Function to return value of a
int B::get_a()
{
    return a;
}

// Function to display value of a
void B::show_a()
{
    cout << "a = " << a << endl;
}

// Function to calculate multiplication
void D::mul()
{
    get_ab();
    c = b * get_a();
}

// Function to display a, b and c
void D::display()
{
    show_a();
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
}

// Main function
int main()
{
    D d;

    d.mul();
    d.display();

    return 0;
}