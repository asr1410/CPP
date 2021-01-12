#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <fstream>
#include <string>
#include <cstdio>
#include <algorithm>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char> //here the default parameter are passed
class Harry
{
public:
    T1 a;
    T2 b;
    T3 c;
    Harry(T1 x, T2 y, T3 z) //constructor
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout << "the value of a is " << a << endl;
        cout << "the value of b is " << b << endl;
        cout << "the value of c is " << c << endl;
    }
};

int main()
{
    Harry<int, float, int> ob1(3, 4.5, 'a');
    ob1.display();
    return 0;
}