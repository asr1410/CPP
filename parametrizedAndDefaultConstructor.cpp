#include <iostream>
#include <cmath>
#include <string>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
class complex
{
    int a, b;

public:
    // complex(void);     //default constructor declaration with same class name
    complex(int, int); //parametrized constructor declaration with same class name
    void printNumber(void)
    {
        cout << "the number is " << a << " + " << b << "i" << endl;
    }
};
// complex::complex(void); //-->this is default constructor so it will not take any arguments
// {
//     a = 0;
//     b = 0;
//     //cout << "Hello world";
// }
complex::complex(int x, int y) //-->this is parameterized constructor so it will not take any arguments
{
    a = x;
    b = y;
    //cout << "Hello world";
}

int main()
{
    // complex a;
    // a.printNumber();

    // Implicit call;
    complex a(5, 6);

    //Explicit call
    complex b = complex(5, 7);
    a.printNumber();
    b.printNumber();
    return 0;
}