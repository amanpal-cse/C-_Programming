#include <iostream>
using namespace std;

class Rectangle
{
public:
    int length, width;
    void input()
    {
        cout << "Enter Length: ";
        cin >> length;
        cout << "Enter Width: ";
        cin >> width;
    }
    void area()
    {
        cout << "Area = " << length * width << endl;
    }
};
int main()
{
    Rectangle r;
    r.input();
    r.area();
    return 0;
}