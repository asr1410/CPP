#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <string>
#include <cstdio>
#include <algorithm>
using namespace std;

//base class
class Employee
{

public:
    int id;
    float salary;
    Employee() {}
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
};

//Derived class syntax
/*
class {{derived- class name }} : {{{visiblity mode}}} {{base 
class name}}
{
    class members/methods/etc....
}
note-->
1.default visiblity mode is private
2.private visiblity mode:public member of base class become private member of derived class
3.public visiblity mode: public member of base class become public member of derived class
*/
//Creating class from base class
class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }
};

int main()
{
    Employee harry(21), rohan(10);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;

    Programmer skillf(1);
    cout << skillf.languageCode << endl;
    cout << skillf.id << endl;
    return 0;
}