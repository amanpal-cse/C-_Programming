#include<iostream>
using namespace std;
int main()
{
    string name;
    int roll;
    float marks;
    
    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter Roll no.: "<<endl;
    cin >> roll;
    cout << "Enter marks: "<<endl;
    cin >> marks;

    cout << " =========Student_Data========="<<endl;
    cout << "Student name  : "<<name<<endl;
    cout << "Student Roll no. : "<< roll<<endl;
    cout << "Student marks : "<< marks<<endl;
    
}