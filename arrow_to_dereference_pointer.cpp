#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <string>
#include <cstdio>
#include <algorithm>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    void getData()
    {
        cout << "the real part is " << real << endl;
        cout << "the imaginary part is " << imaginary << endl;
    }
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};
int main()
{
    // Complex c1;
    // Complex *ptr = &c1;
    Complex *ptr = new Complex;
    (*ptr).getData();
    ptr->getData();

    //array of object
    Complex *ptr1 = new Complex[4];
    ptr1->setData(1, 4);
    ptr1->getData();
    return 0;
}