#include<iostream>
using namespace std;
class student
{
 int roll;   
char name [20];
float per;
public:void input()
{
    cout<<"enter name roll and percentage";
    cin>>name>>roll>>per;
}
char email [30];
void display ()
{
    cin>>email;
    cout<<"\n data of student are"<<endl;
    cout<<name<<"\t"<<roll<<"\t"<<email<<"\t"<<per;
    }
};
int main()
{
    student s1;
    s1.input();
    s1.display();
    return 0;
}
