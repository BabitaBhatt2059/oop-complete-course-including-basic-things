#include <iostream>
using namespace std;
class Babita
{
private:
    int roll, marks;

public:
    char name[14];
    void getdata()
    {
        cout << "Enter your information";
        cin >> roll >> marks >> name;
    }
    void display()
    {
        cout << "my information:"<<roll<<"\t"<<marks<<"\t"<<name<<endl;
    }
};
int main()
{
    Babita b;
    b.getdata();
    b.display();
    return 0;
}
