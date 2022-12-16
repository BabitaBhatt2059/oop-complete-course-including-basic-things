#include<iostream>
using namespace std;
// typedef struct employe
// {
//     /* data */
//     char name;
//     int roll;
//     float marks;
// }ep;
union money{
     /* data */
    char name;
    int roll;
    float marks;

};
 
int main(){
    // enum
    enum meal{breakfast, lunch, dinner};
    cout<<lunch;
//   ep s;
//   s.name = 'b';
//   s.roll = 10;
//   s.marks = 85;
//   cout<<"name"<<s.name<<endl;
//   cout<<"roll"<<s.roll<<endl;
//   cout<<"marks"<<s.marks<<endl;
// //   union 
// union  money m1;
// m1.name = 'B';
// // m1.roll = 10;
// // m1.marks = 65;
// cout<<m1.name; 

    

    
return 0;
};