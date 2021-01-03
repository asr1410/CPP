#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <string>
#include <cstdio>
#include <algorithm>
using namespace std;
int count = 0;

class num
{

public:
    num()
    {
        count++;
        cout << "this is time when constructor is called for object number" << count << endl;
    }
    ~num()
    {
        cout << "this is the time when the destructor is called for object number" << count << endl;
        count--;
    }
};

int main()
{
    cout << "we are inside our main function" << endl;
    cout << "Creating first object n1" << endl;
    num n1;
    {
        cout << "creating two or more object" << endl;
        num n2, n3;
        cout << "Exiting this block" << endl;
    }
    cout << "Back to main";
    return 0;
}