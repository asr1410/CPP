#include <iostream>
#include <cmath>
#include <string>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
class c2; //forward declaration

class c1
{
    int val1;
    friend void exchange(c1 &, c2 &);

public:
    void intData(int a)
    {
        val1 = a;
    }
    void display(void)
    {
        cout << val1 << endl;
    }
};

class c2
{
    int val2;
    friend void exchange(c1 &, c2 &);

public:
    void intData(int a)
    {
        val2 = a;
    }
    void display(void)
    {
        cout << val2 << endl;
    }
};
void exchange(c1 &x, c2 &y)
{
    int tmp = x.val1;
    x.val1 = y.val2;
    y.val2 = tmp;
};

int main()
{
    c1 oc1;
    c2 oc2;
    oc1.intData(34);
    oc2.intData(25);
    exchange(oc1, oc2);

    cout << "The value of c1 after exchange becomes:" << endl;
    oc1.display();
    cout << "The value of c2 after exchange becomes:" << endl;
    oc2.display();

    return 0;
}