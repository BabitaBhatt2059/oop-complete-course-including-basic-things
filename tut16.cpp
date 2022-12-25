#include<iostream>
using namespace std;
class sum{
    int x,y;
    public:
    sum( int a,int b){
        x= a;
        y= b;
    }
      void PrintNumber(){
        cout<<"the point is:"<<x<<","<<y<<endl;
      }
};
int main(){
    sum p(14,17);
    p.PrintNumber();
    sum q(14,78);
    q.PrintNumber();

    
return 0;
};