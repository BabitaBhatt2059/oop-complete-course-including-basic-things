#include <iostream>
using namespace std;
void add(int a, int b)
{
    cout << "addition" << a + b << endl;
}
void add(float a, float b,int c)
{
    cout << "addition" << a + b+c << endl;
}
int main()
{
    add(2, 3);
    add(2.3, 2.5,8);

    return 0;
};
