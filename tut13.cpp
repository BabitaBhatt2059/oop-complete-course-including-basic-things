#include<iostream>
using namespace std;
int sum(int p, int q)
{int c = p+q;
return c;

};
int main(){
    int num1,num2;

    cout<<"the value of num 1"<<num1<<endl;
    cin>>num1;
    cout<<"the value of num 2"<<num2<<endl;
    cin>>num2;
    cout<<"the sum of two number is:"<<sum(num1,num2);

    
return 0;
};