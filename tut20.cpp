#include<iostream>
using namespace std;
 
 
float area (int a, int b)
{
    return (0.5*a*b);
}
float area (float k, int l)
{
    return(k*l);
}
float area (float p)
{
    return(3.14*p*p);
}
int main()
{
    int c, d, k;
    float t, s;
    system("cls");
 
    cout<<"enter three entegers";
 
    cin>>c>>d>>t;
 
    cout<<"area of triangle="<<area(c,d);
    cout<<"\n area of rectangle="<<area(t,c);
    cout<<"\n area of circle="<<area(t);
    return 0;
}
