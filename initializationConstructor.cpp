#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <string>
#include <cstdio>
#include <algorithm>
using namespace std;
/*
Syntax of intitialization of constructor by different method
constructor(argument-list) : intitialization section
{
    body code is written is here
}
*/
class Base
{
private:
    int a; //it is declared first
    int b; //it is declared after a so we van use a with b while declaration

public:
    // Base(int m, int n) : a(m), b(n)
    // Base(int m, int n) : a(m), b(n + m)
    // Base(int m, int n) : a(m), b(n * 2)
    // Base(int m, int n) : a(m), b(n + a)
    // Base(int m, int n) : a(m + b), b(n) This will throw an error
    Base(int m, int n) : a(m)
    {
        b = n;
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
    }
};

int main()
{
    Base number(2, 4);

    return 0;
}