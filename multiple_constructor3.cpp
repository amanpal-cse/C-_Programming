#include <iostream>
using namespace std;

class time
{
    int hour, minute;

public:
    time() {}

    time(int h)
    {
        hour = h;
        minute = 0;
    }

    time(int h, int m)
    {
        hour = h;
        minute = m;
    }

    friend time sum(time, time);
    friend void show(time);
};

time sum(time t1, time t2)
{
    time t3;

    t3.hour = t1.hour + t2.hour;
    t3.minute = t1.minute + t2.minute;

    if (t3.minute >= 60)
    {
        t3.hour++;
        t3.minute = t3.minute - 60;
    }

    return t3;
}

void show(time t)
{
    cout << t.hour << " hour " << t.minute << " minute\n";
}

int main()
{
    time A(2, 40);
    time B(3, 30);
    time C;

    C = sum(A, B);

    cout << "A = ";
    show(A);

    cout << "B = ";
    show(B);

    cout << "C = ";
    show(C);

    time P, Q, R;

    P = time(5, 20);
    Q = time(2, 50);

    R = sum(P, Q);

    cout << "\nP = ";
    show(P);

    cout << "Q = ";
    show(Q);

    cout << "R = ";
    show(R);

    return 0;
}