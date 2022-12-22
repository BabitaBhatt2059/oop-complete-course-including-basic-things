#include<iostream>
using namespace std;
class complex{
    int a ,b;
    public:
    complex(void);
    // constructor decleration
void printNumber(){
    cout<<"the complex no. is:"<<a<<"+"<<"i"<<b<<endl;
}
};
complex::complex(void){
    a=10;
    b=5;
}
int main(){
    complex a;
    a.printNumber();
return 0;
};