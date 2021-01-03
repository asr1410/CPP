#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <string>
#include <cstdio>
#include <algorithm>
using namespace std;

class Base
{
private:
    int data1; //private and cannot be inherited by other data

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};

void Base ::setdata()
{
    data1 = 10;
    data2 = 20;
}
int Base ::getdata1()
{
    return data1;
}
int Base ::getdata2()
{
    return data2;
}

class Derived : private Base //class inherited privately
{
private:
    int data3;

public:
    void process();
    void display();
};
void Derived ::process()
{
    setdata(); //private data can be used in public function
    data3 = data2 * getdata1();
}
void Derived::display()
{
    cout << "The value of data 1 is " << getdata1() << endl;
    cout << "The value of data 2 is " << data2 << endl;
    cout << "The value of data 3 is " << data3 << endl;
}

int main()
{
    Derived der;
    // der.setdata();//it is the private member function so it will not run directly
    der.process();
    der.display();
    return 0;
}