#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <string>
#include <cstdio>
#include <algorithm>
using namespace std;

class A
{
    int a;

public:
    //int x=2;
    //int &y = x; y is addresing the value of x
    A &setData(int a)
    {
        this->a = a;
        return *this;
    }
    void getData()
    {
        cout << "the value of a is " << a;
    }
};

int main()
{
    //this is a keyword which is a pointer which points to the object which invokes the member function
    A a;
    a.setData(2).getData();
    a.getData();
    return 0;
}