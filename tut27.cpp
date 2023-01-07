#include<iostream>
using namespace std;
class student{

int x,y;
public:
student(int a ,int b){
    x=a;
    y=b;
}
void getdata();
};
void student::getdata(){
    cout<<"\nx="<<x<<"\ny="<<y;
}
int main(){
    student aa( 34,56);
    aa.getdata();
    
return 0;
}