#include <iostream>
using namespace std;
class demo
{
    int x,y;

public:
    demo()
    {x=10;
    }
    demo(demo &z){
        x=z.x;   
    }
    void getdata()
    {
        cout<<"\n x="<<x;
    }
};
 int main()
{ demo aa;
demo bb(aa);
bb.getdata();
  return 0;
}