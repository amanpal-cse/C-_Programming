#include <iostream>
using namespace std;
class Student
{
    int marks;
public:
    void getData()
    {
        cout << "Enter marks: ";
        cin >> marks;
    }
    void compare(Student s)
    {
        if (marks > s.marks)
            cout << "First student has higher marks";
        else if (marks < s.marks)
            cout << "Second student has higher marks";
        else
            cout << "Both have same marks";
    }
};
int main()
{
    Student s1, s2;

    s1.getData();
    s2.getData();
    s1.compare(s2);
    return 0;
}