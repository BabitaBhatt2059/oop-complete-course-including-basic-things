#include<iostream>
using namespace std;
class babita{
    int x,y;
    public:
    babita(){
        x=34;
        y=56;
    }
        void getdata();
    
};
void babita::getdata()
{
    cout<<"\n x"<<x<<"\n y"<<y;
}
int main(){
    babita aa;
    aa.getdata();
    
return 0;
}