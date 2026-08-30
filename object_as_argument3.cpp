#include <iostream>
using namespace std;
class Distance
{
    int feet, inch;
public:
    void getData()
    {
        cout <<"Enter feet : ";
        cin >> feet;
        cout <<"Enter Inch : ";
    }

    void add(Distance d)
    {
        int f = feet + d.feet;
        int i = inch + d.inch;
        if (i >= 12)
        {
            f++;
            i = i - 12;
        }
        cout << "Total Distance = " << f << " feet "
             << i << " inch";
    }
};
int main()
{
    Distance d1, d2;
    d1.getData();
    d2.getData();
    d1.add(d2);
    return 0;
}