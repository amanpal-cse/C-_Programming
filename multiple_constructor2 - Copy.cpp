#include <iostream>
using namespace std;

class Distance
{
    float feet, inch;

public:
    Distance() {}

    Distance(float f)
    {
        feet = f;
        inch = 0;
    }

    Distance(float f, float i)
    {
        feet = f;
        inch = i;
    }

    friend Distance sum(Distance, Distance);
    friend void show(Distance);
};

Distance sum(Distance d1, Distance d2)
{
    Distance d3;

    d3.feet = d1.feet + d2.feet;
    d3.inch = d1.inch + d2.inch;

    if (d3.inch >= 12)
    {
        d3.feet++;
        d3.inch = d3.inch - 12;
    }

    return d3;
}

void show(Distance d)
{
    cout << d.feet << " feet " << d.inch << " inch\n";
}

int main()
{
    Distance A(5, 8);
    Distance B(3, 7);
    Distance C;

    C = sum(A, B);

    cout << "A = ";
    show(A);

    cout << "B = ";
    show(B);

    cout << "C = ";
    show(C);

    Distance P, Q, R;

    P = Distance(6, 5);
    Q = Distance(2, 8);

    R = sum(P, Q);

    cout << "\nP = ";
    show(P);

    cout << "Q = ";
    show(Q);

    cout << "R = ";
    show(R);

    return 0;
}