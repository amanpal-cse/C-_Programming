#include<iostream>
using namespace std;

class Student {
public:
    int roll_no;

    void getRollNo() {
        roll_no = 101;
    }
};

class Test : virtual public Student {
public:
    int marks = 85;
};

class Sports : virtual public Student {
public:
    int score = 90;
};

class Result : public Test, public Sports {
public:
    void display() {
        cout << "Roll Number: " << roll_no << endl;
        cout << "Test Marks: " << marks << endl;
        cout << "Sports Score: " << score << endl;
        cout << "Total Marks: " << marks + score << endl;
    }
};

int main() {
    Result r;

    r.getRollNo();
    r.display();

    return 0;
}