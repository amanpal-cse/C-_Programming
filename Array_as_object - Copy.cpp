#include <iostream>
using namespace std;
class Student
{
    int roll;
    string name;
public:
    void input()
    {
        cout << "Enter roll: ";
        cin >> roll;
        cout << "Enter name: ";
        cin >> name;
    }
    void display()
    {
        cout << roll << " " << name << endl;
    }
};
int main()
{
    Student s[3];
    for(int i = 0; i < 3; i++)
        s[i].input();
    cout << "\nStudent Details:\n";
    for(int i = 0; i < 3; i++)
        s[i].display();
    return 0;
}