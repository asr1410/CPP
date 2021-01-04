#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <string>
#include <cstdio>
#include <algorithm>
using namespace std;
class Base1
{
public:
    void say()
    {
        cout << "this is base class 1" << endl;
    }
};
class Base2
{
public:
    void say()
    {
        cout << "this is base class 2" << endl;
    }
};
class Base3
{
public:
    void say()
    {
        cout << "this is base class 3" << endl;
    }
};
class Derived1 : public Base1, public Base2, public Base3
{
public:
    void say()
    {
        Base1::say(); //resolve ambiguity by declaring it.
    }
};
class Derived2 : public Base1
{
public:
    void say()
    {
        cout << "this is derived class 2" << endl;
    }
};

int main()
{
    //1. Ambiguity 1 --> resolve by declare which class you want to take.
    Derived1 a;
    a.say();

    //2. Ambiguity 2 -->automatic resolved while doing function over riding.
    Derived2 b;
    b.say();

    return 0;
}