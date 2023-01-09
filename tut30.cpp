#include<iostream>
using namespace std;
class demo{
int count=0;
public:
demo(){
    count++;
    cout<<" \n no. of object created"<<count;
}
~demo(){
    count--;
    cout<<" \n no. of object destroyed"<<count;

}
};
int main(){
    demo aa,bb,cc;
    {
        demo dd;
    }
    
return 0;
}