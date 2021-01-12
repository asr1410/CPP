#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <fstream>
#include <string>
#include <cstdio>
#include <algorithm>
using namespace std;
//WHY TO MAKE MULTIPLE FUNCTION INSTAD OF A TEMPLATE ??
// int FunctionAverage(int a, int b)
// {
//     return ((a + b) / 2);
// }

// float FunctionAverage(float a, float b)
// {
//     return ((a + b) / 2);
// }
template <class T1, class T2>
float functionAverage(T1 a, T2 b)
{
    return ((a + b) / 2);
}

template <class T3>
void swapp(T3 &a, T3 &b)
{
    T3 temp = a;
    a = b;
    b = temp;
}
int main()
{
    char a = 'd';
    char b = 'c';
    cout << "the average is " << functionAverage(a, b) << endl;
    swapp(a, b);
    cout << a << b;
    return 0;
}