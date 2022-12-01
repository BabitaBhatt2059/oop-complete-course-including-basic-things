#include <iostream>
using namespace std;
class student
{
private:
    char name[15];
    int marks;

public:
    int roll;
    char sub;
    void getdata()
    {
        cout << "name" << name << "marks" << marks << "roll" << roll << "sub" << sub << endl;

    cin>>name>>marks>>roll>>sub;
    };
    void display()
    {
        cout<<"Information are:"<<endl;
        cout<<name<<"\t"<<marks<<"\t"<<roll<<"\t"<<sub;
    }
};
int main()
{
    student s;
    s.getdata();
    s.display();
    return 0;
}