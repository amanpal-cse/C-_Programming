#include<iostream>
using namespace std;
class student
{
    protected:
        int roll_no;
    public:
        void get_numbers(int a)
        {
        roll_no = a;
    
       }
       void put_number(void)
       {
        cout<<"Roll no "<<roll_no<<"\n";
           }
};

class test : public student
{
    protected:
        float part1, part2 ;
    public:
        void get_marks(float x, float y)
        {
            part1 = x;
            part2 = y;
        
        }
        void put_marks(void)
        {
            cout<<"Marks Obtained : "<<"\n"<<"Part_1 = " <<part1<<"\n"<<"Part 2 = "<<part2<<"\n";
                }
};

class sports
{
    protected:
        float score;
    public:
        void get_score(float s)
        {
            score = s;

        }

    void put_score(void)
    {
        cout<<"Sport WT : "<<score<<"\n";

    }
};

class result : public test,public sports
{
    float total;
    public:
    void display(void);

};

void result :: display(void)
{
    total = part1 + part2 + score;
    put_number();
    put_marks();
    put_score();
    cout<<"Total Score :"<<total<<"\n";

}

int main()
{
    result s1;
    s1.get_numbers(1234);
    s1.get_marks(27.5,33.0);
    s1.get_score(6.0);
    s1.display();
    return 0;
    
}