#include <iostream>
using namespace std;

inline float mul(float x, float y)
{
    return (x * y);
}
inline float div(float p, float q)
{
    return (p / q);
}

int main()
{
    float a = 2.4;
    float b = 4.6;
    cout << mul(a, b)<< endl;
    cout << div(a, b)<< endl;
    return 0;
}