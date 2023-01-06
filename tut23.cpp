#include<iostream>
using namespace std;
class B;
class A
{
    int a;
    public:
    void input()
    {
        cout<<"the value of a is:";
        cin>>a;
    }
    friend int max(A,B);
};
class B
{
    int b;
    public :
    void getdata(){
        cout<<"the value of b";
        cin>>b;

    }
    friend int max(A,B);
};
int max(A aa,B bb){
    if (aa.a>bb.b)
    cout<<"/n max"<<aa.a;
    else
    cout<<"/n max"<<bb.b;
    return 0;
}


int main(){
    A aa;
    B bb;
    aa.input();
    bb.getdata();
    max(aa,bb);

    
return 0;
};