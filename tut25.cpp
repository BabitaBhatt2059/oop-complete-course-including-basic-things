#include<iostream>
using namespace std;
class demo{
    int a,b;
    static int c;
    public:
    void getdata(int x,int y){
        a=x;
        b=y;
        c=c+1;
    }
    void display()
    {
        cout<<"\n a="<<a<<"\nb="<<b;
    }
    static void student()
    {
        cout<<"\nc="<<c;
    }
};
int demo::c;
int main()
{
    demo aa,bb;
    aa.getdata(12,25);
    aa.display();
    bb.getdata(67,78);
    bb.display();
    demo::student();
    return 0;
}