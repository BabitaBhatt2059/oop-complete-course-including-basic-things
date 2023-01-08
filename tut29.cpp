#include<iostream>
using namespace std;
class man{
    int x;
    public:
    man(){
        x=10;
    }
    man(int a){
        x=a;
    }
    man(man &z){
        x=z.x;
    }
    
void getdata(){
    cout<<"\n x="<<x;
}
};
int main(){
    man aa;
    aa.getdata();
    man bb(20);
    bb.getdata();
    man cc(aa);
    cc.getdata();
return 0;
}