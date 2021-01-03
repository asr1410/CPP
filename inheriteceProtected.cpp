#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <string>
#include <cstdio>
#include <algorithm>
using namespace std;

class Base
{
protected:
    int a;

private:
    int b;
};
/*
    FOR A PROTECTED MEMBER
                                PUBLIC DERVATION    PRIVATE DERIVATION    PROTECTED DEIVATION
    1. PRIVATE MEMBER-->        NON INHERITED         NON INHERITED         NON INHERITED
    2. PROTECTED MEMBER-->         PROTECTED             PRIVATE              PROTECTED
    3. PUBLIC MEMBER-->              PUBLIC               PRIVATE             PROTECTED
*/

class Derived : protected Base
{
};
int main()
{
    Base b;
    Derived d;
    // cout << d.a;//Since a is protected in base as well as derived class so it will not execute
    return 0;
}