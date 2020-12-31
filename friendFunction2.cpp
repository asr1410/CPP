// friend for two classes in single function
#include <iostream>
#include <cmath>
#include <string>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
//forward declaration of the data from class Y
class Y;

class X
{
    int data;

public:
    void getData(int value)
    {
        data = value;
    }
    friend void add(X, Y); //Here we have to acknowledge that the value of data of Y earlier
};

class Y
{
    int num;

public:
    void getData(int value)
    {
        num = value;
    }
    friend void add(X, Y);
};

void add(X o1, Y o2)
{
    cout << "The value of the given function is " << o1.data + o2.num << endl;
}

int main()
{
    X a1;
    a1.getData(5);

    Y a2;
    a2.getData(6);

    add(a1, a2);

    return 0;
}