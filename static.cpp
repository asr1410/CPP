#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <string>
#include <cstdio>
#include <algorithm>
using namespace std;
class MyBaseClass
{
private:
    int x;

public:
    static int count; //static variable are already inti. as 0
                      //Default constructor
    MyBaseClass()
    {
        count++; //increment every time a object is created
    }
    static int getCount() //static member function
    {
        // return x; //THIS will throw an error
        return count;
    }
};
//Initialization
int MyBaseClass ::count; //can be used when the static variable is public class

int main()
{
    //WHEN STATIC IS IN PUBLIC CLASS
    cout << "Initial count is " << MyBaseClass::count << endl;
    MyBaseClass a, b;
    cout << "Count after two object is " << MyBaseClass::getCount() << endl;

    //WHEN STATIC IS IN PRIVATE CLASS
    // cout << "Count is " << MyBaseClass::getCount() << endl; //when data member is in private class
    return 0;
}