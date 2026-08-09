#include <iostream>
using namespace std;

float add(float a, float b)
{
    return a + b;
}

float subtract(float a, float b)
{
    return a - b;
}
float multiply(float a, float b)
{
    return a * b;
}

float divide(float a, float b)
{
    if (b == 0)
    {
        cout <<"Division by zero is not possible."<< endl;
        return 0;
    }
    return a / b;
}

int main()
{
    float num1, num2;
    int choice;

    cout << "===== Calculator =====" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;

    cout << "\nEnter your choice (1-4): ";
    cin >> choice;

    cout << "Enter first numbers: ";
    cin >> num1 ;
    cout << " Enter second number: ";
    cin >> num2 ;

    switch (choice)
    {
        case 1:
            cout << "Result = " << add(num1, num2);
            break;

        case 2:
            cout << "Result = " << subtract(num1, num2);
            break;

        case 3:
            cout << "Result = " << multiply(num1, num2);
            break;

        case 4:
            cout << "Result = " << divide(num1, num2);
            break;

        default:
            cout << "Invalid Choice";
    }

    return 0;
}