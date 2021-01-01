#include <iostream>
#include <cmath>
#include <string>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
class Complex
{
    int a, b;

public:
    //Creating a constructor
    // constructor is a special member function with same name as the class.It is automatically invoked when object is createdd
    // it is used to initialize the object of the class

    Complex(void); //Constructor declaration//function declare
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(void) //Function Defination
{
    a = 10;
    b = 0;
}

int main()
{
    Complex c;
    c.printNumber(); //due to deefault constructor it invoked automatically

    return 0;
}

/*
character of constructor
1. it should be declared in public sectiion of the class
2. thet are automatically invoked whenever the object is created
3. they cannot return values and do not have return types
4. it can have default arguments
5. we cannot refer to their address
*/
