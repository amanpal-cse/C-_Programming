#include <iostream>
using namespace std;
class Student
{
    int marks;
    public:
    void input()
    {
        cout << "Enter marks: ";
        cin >> marks;
    }
    int getMarks()
    {
        return marks;
    }
};
int main()
{
    Student s[3];
    int highest = 0;
    for(int i = 0; i < 3; i++)
        s[i].input();
    for(int i = 1; i < 3; i++)
    {
        if(s[i].getMarks() > s[highest].getMarks())
            highest = i;
    }
    cout << "Highest Marks = " << s[highest].getMarks();
    return 0;
}