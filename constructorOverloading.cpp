//CONSTRUCTOR OVERLOADING IN CLASS
#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <string>
#include <cstdio>
#include <algorithm>

using namespace std;

class Complex
{
    int a, b;

public:
    Complex()
    {
        a = 0;
        b = 0;
    }
    Complex(int x)
    {
        a = x;
        b = 0;
    }
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    void printNumber()
    {
        cout << "the entered complex no is " << a << " + " << b << "i" << endl;
    }
};
int main()
{
    Complex c1(4, 5);
    c1.printNumber();

    Complex c2(3);
    c2.printNumber();

    Complex c4;
    c4.printNumber();
    return 0;
}