#include <iostream>
using namespace std;
class coordinate
{
    int x, y;

public:
    void input()
    {
        cin >> x >> y;
    }
    void show()
    {
        cout << x << y;
    }
    friend coordinate sum(coordinate, coordinate);
};
coordinate sum(coordinate a, coordinate b)
{
    coordinate z;
    z.x = a.x + b.y;
    z.y = a.y + b.y;
    return (z);
}

int main()
{
    coordinate i, j, k;
    i.input();
    j.input();
    k = sum(i, j);
    i.show();
    j.show();

    return 0;
}