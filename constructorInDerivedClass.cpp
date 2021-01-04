#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <string>
#include <cstdio>
#include <algorithm>
using namespace std;

/*
Case 1:
Class B :public A{
    //order of execution of constructor-->first A() then B()
};

Case 2:
class A: public B,public C{
    //order of execution of constructor-->B() then C() and A()
};

Case 3;
class A: public B,virtual public C{
    //order of execution -->C() then B() and A()
}
*/

class Base1
{
private:
    int data1;

public:
    Base1(int a)
    {
        data1 = a;
        cout << "Base1 class constructor called" << endl;
    }
    void getDataBase1(void)
    {
        cout << "the value of data1 is " << data1 << endl;
    }
};

class Base2
{
private:
    int data2;

public:
    Base2(int a)
    {
        data2 = a;
        cout << "Base2 class Constructor called" << endl;
    }
    void getDataBase2(void)
    {
        cout << "the value of data2 is " << data2 << endl;
    }
};

class Derived : public Base1, public Base2
{
private:
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        derived1 = a;
        derived2 = b;
        cout << "Derive class constructor called" << endl;
    }
    void printData(void)
    {
        cout << "The value of derived 1 is " << derived1 << endl;
        cout << "The value of derived 2 is " << derived2 << endl;
    }
};

int main()
{
    Derived harry(1, 2, 3, 4);
    harry.getDataBase1();
    harry.getDataBase2();
    harry.printData();
    return 0;
}