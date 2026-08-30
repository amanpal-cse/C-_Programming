#include <iostream>
using namespace std;

class Book
{
public:
    string title;
    int price;
    void input()
    {
        cout << "Enter Book Title: ";
        cin >> title;
        cout << "Enter Price: ";
        cin >> price;
    }
    void display()
    {
        cout << "Book Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};
int main()
{
    Book b;
    b.input();
    b.display();
    return 0;
}