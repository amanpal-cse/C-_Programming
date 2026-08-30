#include <iostream>
using namespace std;
class Number
{
    int x;
public:
    void getData()
    {
        cout << "Enter number: ";
        cin >> x;
    }
    void add(Number n)
    {
        cout << "Sum = " << x + n.x;
    }
};
int main()
{
    Number n1, n2;
    n1.getData();
    n2.getData();
    n1.add(n2);
    return 0;
}