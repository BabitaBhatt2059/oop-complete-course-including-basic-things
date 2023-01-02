#include<iostream>
using namespace std;
class student{
    int x,y;
    public:
    void getdata(){
        cout<<"enter ur data";
        cin>>x>>y;

    }
    void display(){
        cout<<"ur data is"<<x<<endl;
        cout<<"ur data is"<<y;

    }
};
int main(){
    student s;
    s.getdata();
    s.display();
    
return 0;
}