#include<iostream>
using namespace std;
class demo{
    int x,y;
    static int z;
    public:
    void getdata(int a,int b){
        x=a;
        y=b;
        z=z+1;
        
    }
    void display(){
        cout<<"the numbers are:"<<x<<y<<z;

    }
    static void abc(){
        cout<<"\n z"<<z;

    }
};
int demo::z;

int main(){
    demo aa,bb;
   aa.getdata(2,4);
   aa.display();
   bb.getdata(56,89);
   aa.display();
   demo::abc();



    
return 0;
}