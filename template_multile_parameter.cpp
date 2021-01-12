#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <fstream>
#include <string>
#include <cstdio>
#include <algorithm>
using namespace std;
/*
class Template with multiple parameter(one , two or more than two)
template <class t1 , class t2....(COMMA SEPERATED)>
class nameofclass{
    //body
}
*/
template <class T1, class T2>
class myclass
{
public:
    T1 data1;
    T2 data2;
    myclass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << this->data1 << endl
             << this->data2;
    }
};

int main()
{
    myclass<char, float> obj('C', 1.8);
    obj.display();

    return 0;
}