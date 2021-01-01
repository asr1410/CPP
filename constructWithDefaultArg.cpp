#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <string>
#include <cstdio>
#include <algorithm>
using namespace std;

class Simple
{
    int data1;
    int data2;
    int data3;

public:
    Simple(int a = 6, int b = 6, int c = 9)
    //Default values of the argument of the given function
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void printData(); //Declaration of The Variable
};

void Simple ::printData()
{
    cout << "the value of are " << data1 << ", " << data2 << " and " << data3 << "." << endl;
}

int main()
{
    Simple c1(1, 2, 3);
    c1.printData();

    Simple c2(3);
    c2.printData();

    Simple c3(1, 2);
    c3.printData();

    return 0;
}