#include <iostream>
using namespace std;
class vector
{
    int a[10];
    float avg;

public:
    void getdata();
    friend void average(vector); // ff decleration
};
void vector::getdata()
{
    {
        for (int i = 0; i < 10; i++)
            cin >> a[i]; // value input
    }
}

    void average(vector v1){
     float sum = 0.0;
    for (int i = 0; i < 10; i++)
    {
        sum += v1.a[i];
         v1.avg = sum / 10;
        cout << "average=" << v1.avg;
    }
}

int main()
{
    vector obj;
    cout << "enter 10 integer";
    obj.getdata();
    average(obj);
    return 0;
}