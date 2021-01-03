#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <string>
#include <cstdio>
#include <algorithm>
using namespace std;

class Base1
{
protected:
    int base1;

public:
    void get_base1(int a)
    {
        base1 = a;
    }
};

class Base2
{
protected:
    int base2;

public:
    void get_base2(int a)
    {
        base2 = a;
    }
};

class Derived : public Base1, public Base2
{
private:
    int base3;

public:
    void sum()
    {
        base3 = base2 + base1;
    }
    void display()
    {
        sum();
        cout << "the value of base 1 is " << base1 << endl;
        cout << "the value of base 2 is " << base2 << endl;
        cout << "the sum of these values is " << base3 << endl;
    }
};

int main()
{
    Derived a;
    a.get_base1(5);
    a.get_base2(4);
    a.display();
    return 0;
}