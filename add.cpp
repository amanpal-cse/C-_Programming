#include <iostream>
using namespace std;

void add()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Sum = " << a + b;
}
int main()
{
    add();
    return 0;
}