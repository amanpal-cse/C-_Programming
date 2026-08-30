#include <iostream>
using namespace std;

class sample
{
    int a;
    int b;

public:
    void setvalue()
    {
        a = 25;
        b = 40;
    }
    friend float mean(sample S);
};
float mean(sample S)
{
    return float(S.a + S.b) / 2.0;
}
int main()
{
    sample X;
    X.setvalue();
    cout << "Mean value = " << mean(X);
    return 0;
}