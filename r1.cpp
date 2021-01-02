#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <string>
#include <cstdio>
#include <algorithm>
using namespace std;

class Number
{
    int a;

public:
    //when a constructor is called you have to to make a default constructor
    Number()
    {
        a = 0;
    }
    Number(int num)
    {
        a = num;
    }
    // When no copy constructor found compiler supply its own copy constructor
    Number(Number &obj) //copy constructor
    {
        cout << "copy constructor called " << endl;
        a = obj.a;
    }
    void display()
    {
        cout << "the number for this object is " << a << endl;
    }
};

int main()
{
    Number x, y, z(45), z2, z3;
    x = Number(25);
    x.display();
    y.display();
    z.display();

    Number z1(x); //copy constructor called
    z1.display();

    z2 = z;
    z2.display(); //copy constructor not called

    Number z3 = z; //copy constructor invoked
    z3.display();  //copy constructor not called

    return 0;
}