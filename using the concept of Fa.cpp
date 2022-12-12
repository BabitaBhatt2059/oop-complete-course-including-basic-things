#include <iostream>
using namespace std;
class time
{
    int hours, minutes;

public:
    void gettime(int h, int m)
    {
        hours = h;
        minutes = m;
    };
    void display()
    {
        cout << hours << "hours" << minutes << "minutes" << endl;

        void sum(time, time)
    };
    void time::sum(time t1, time t2)
    {
        minutes = t1.minutes + t2.minutes;
        hours = minutes / 60;
        minutes = minutes % 60;
        hours = hours + t1.hours + t2.hours;
    };
};