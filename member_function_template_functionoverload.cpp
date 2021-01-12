#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <fstream>
#include <string>
#include <cstdio>
#include <algorithm>
using namespace std;

template <class T>
class Harry
{
public:
    T in;
    Harry(T a)
    {
        in = a;
    }
    void display();
};

template <class T> //template member function declare outside class
void Harry<T>::display()
{
    cout << in << endl;
}

void func(int a) //direct declare
{
    cout << "the call of func() " << a << endl;
}

template <class T>
void func(T a) //temp declare
{
    cout << "the call of func1() " << a << endl;
}

template <class T>
void func2(T a)
{
    cout << "the call of func2() " << a << endl;
}

int main()
{
    Harry<int> o1(5);
    o1.display();
    func(4); //excact function have more prior
    func2('A');
    return 0;
}