#include<iostream>
using namespace std;
int main(){
    int *pa,*pb,*pc;
    pa=new int;
    pb=new int;
    pc=new int;
    cout<<"Enter intergers";
    cin>>*pa>>*pb;
    *pc=*pa+*pb;
    cout<<"display sum"<<*pc;
    delete pa;
    delete pb;
    delete pc;




return 0;
}