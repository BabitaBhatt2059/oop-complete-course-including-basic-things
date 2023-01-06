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
        cout<<"\n a="<<a<<"\nb="<<b<<"\n c="<<c;
    }
};
 int demo::c;
int main(){
    demo aa,bb;
    aa.getdata(14,15);
    bb.getdata(45,89);
    aa.display();
    bb.display();
    
return 0;
}