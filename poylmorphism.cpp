//POLYMORPHISM
// 1. compile time polymorphism
//     (a) function overloading
//     (b) operator overloading
// 2. Run time poymorphism
//     (a) virtual function
//- one operator and multiple forms
//- eg. funtion overloading, operator overloading
// virtual function
#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <string>
#include <cstdio>
#include <algorithm>
using namespace std;

class BaseClass
{
public:
    int var_base;
    void display()
    {
        cout << "display var class variable var_base " << var_base << endl;
    }
};
class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void display()
    {
        cout << "display Base class variable var_base " << var_base << endl;
        cout << "display Derived class variable var_derived " << var_derived << endl;
    }
};

int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj1;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived; //pointing base class pointer to derived class
    return 0;
}