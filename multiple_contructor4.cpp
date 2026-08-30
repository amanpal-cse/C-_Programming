#include <iostream>
using namespace std;

class Marks
{
    int math, physics;

public:
    Marks() {}

    Marks(int m, int p)
    {
        math = m;
        physics = p;
    }

    friend Marks sum(Marks, Marks);
    friend void show(Marks);
};

Marks sum(Marks m1, Marks m2)
{
    Marks m3;

    m3.math = m1.math + m2.math;
    m3.physics = m1.physics + m2.physics;

    return m3;
}

void show(Marks m)
{
    cout << "Math = " << m.math << endl;
    cout << "Physics = " << m.physics << endl;
}

int main()
{
    Marks A(70, 80);
    Marks B(20, 10);
    Marks C;

    C = sum(A, B);

    cout <<"A:" << endl;
    show(A);

    cout <<"\nB:" << endl;
    show(B);

    cout <<"\nC:" << endl;
    show(C);

    return 0;
}