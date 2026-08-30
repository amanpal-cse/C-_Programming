#include<iostream>
#include<string>
using namespace std;
struct student
{
    string name;
    int rollnumber;
    double gpa;
};
int main()
{
    student s1;
    s1.name = "Aman";
    s1.rollnumber = 25;
    s1.gpa = 7.25
    
    student s2;
    s2.name = "Amit";
    s2.rollnumber = 26;
    s2.gpa = 7.35;

    cout<<"Student 1 datails"<<endl;
    cout<<"Name : "<<s1.name<<endl;
    cout<<"Rollnumber :"<<s1.rollnumber<<endl;
    cout<<"GPA :"<<s1.gpa<<endl;

    cout<<"Student 2 datails"<<endl;
    cout<<"Name : "<<s2.name<<endl;
    cout<<"Rollnumber :"<<s2.rollnumber<<endl;
    cout<<"GPA :"<<s2.gpa<<endl;


}
}