#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "how many years u r:";
    cin >> age;
    switch (age)
    {
    case 18:
        cout << "u r 18 years old";

        break;
    case 23:
    cout<<"u r not 18 ";
    break;

    default:
    cout<<"u r adult now";
        break;
    }
    return 0;
};