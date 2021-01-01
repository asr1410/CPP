#include <iostream>
#include <cmath>
#include <string>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

class point
{
private:
    int x, y;

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void pointDisplay(void)
    {
        cout << "the value of the coordinates are (" << x << "," << y << ")" << endl;
    }
};
int main()
{
    point p(5, 10);
    p.pointDisplay();

    point q(5, 14);
    q.pointDisplay();

    return 0;
}