<<<<<<< HEAD
#include <iostream>
using namespace std;
class student
{
    int marks, roll;

public:
    float per;
    char name[20];
    void getdata(){
    cout<<"enter name roll marks and per";
    cin>>marks>>roll>>per>>name;
    }
    void display(){
    cout<<"data of student are:";
    cout<<name<<marks<<roll<<per;
    }
};
int main(){
    student s;
    s.getdata();
    s.display();
    return 0;


=======
#include <iostream>
using namespace std;
class student
{
    int marks, roll;

public:
    float per;
    char name[20];
    void getdata(){
    cout<<"enter name roll marks and per";
    cin>>marks>>roll>>per>>name;
    }
    void display(){
    cout<<"data of student are:";
    cout<<name<<marks<<roll<<per;
    }
};
int main(){
    student s;
    s.getdata();
    s.display();
    return 0;


>>>>>>> 378fce419593235af3d2143a6ec2bd6280adfb9b
};