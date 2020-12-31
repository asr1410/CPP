#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

class complex; //Forward declaration of the complex class

class calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int complexRealSum(complex, complex); //declaration of functiom
    int complexImagSum(complex, complex); //declaration of functiom
};

class complex
{
private:
    int a;
    int b;
    //Individually declare function as friends
    //in below we are declare the friend class for the calculator variable
    // friend int calculator ::complexRealSum(complex o1, complex o2);
    // friend int calculator ::complexImagSum(complex o1, complex o2);

    //Altier method-->
    friend class calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
} o2;

int calculator ::complexRealSum(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int calculator ::complexImagSum(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex o1;

    o1.setNumber(1, 4);
    o1.printNumber();

    o2.setNumber(2, 4);
    o2.printNumber();

    calculator sum;

    int realsum = sum.complexRealSum(o1, o2);
    cout << "The sum of real values of the complex no is " << realsum << endl;

    int imagsum = sum.complexImagSum(o1, o2);
    cout << "The sum of imag. values of the complex no is " << imagsum << endl;

    return 0;
}