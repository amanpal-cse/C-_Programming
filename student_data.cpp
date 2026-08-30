#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int roll;
    float marks;

public:
    void getData();
    void display();
};

void Student::getData()
{
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Roll Number: "<<endl;
    cin >> roll;
    cout << "Enter Marks: "<<endl;
    cin >> marks;
}

void Student::display()
{
    cout << "\n----- Student Details -----" << endl;
    cout << "Name : " << name << endl;
    cout << "Roll : " << roll << endl;
    cout << "Marks: " << marks << endl;

    if (marks >= 33)
        cout << "Result: Pass" << endl;
    else
        cout << "Result: Fail" << endl;
}

int main()
{
    Student s;
    s.getData();
    s.display();

    return 0;
}