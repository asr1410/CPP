/*
this is the program on how to merge two classes in a single class--> USING MULTIPLE INHERITENCE
1. Class 1 = Simple Calculator
2. Class 2 = Scientific Calculator
3. class 3 = Result
4. result-->Scientific Calculator + Simple Calculator
*/
#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <string>
#include <cstdio>
#include <algorithm>
using namespace std;

class SimpleCalculator
{
private:
    float a, b;
    char c;

public:
    void setNumbers(float x, float y)
    {
        a = x;
        b = y;
    }
    float getNumber1()
    {
        return a;
    }
    float getNumber2()
    {
        return b;
    }
};

class ScientificCalculator
{
private:
    float a1;

public:
    void setNumber(float x)
    {
        a1 = x;
    }
    float getNumber()
    {
        return a1;
    }
    void chooseOperationForScientific()
    {
        cout << "Enter 1 for square of number" << endl;
        cout << "Enter 2 for cube of number" << endl;
        cout << "Enter 3 for square root of number" << endl;
        cout << "Enter 4 for factorial of number" << endl;
    }
};
class Result : public SimpleCalculator, public ScientificCalculator
{
public:
    void chooseOptionForScientific(int a)
    {
        if (a == 1)
        {
            cout << "the square of " << getNumber() << " is " << fixed << setprecision(3) << (getNumber() * getNumber()) << endl;
        }
        else if (a == 2)
        {
            cout << "the cube of " << getNumber() << " is " << fixed << setprecision(3) << (getNumber() * getNumber() * getNumber()) << endl;
        }
        else if (a == 3)
        {
            cout << "the square of " << getNumber() << " is " << fixed << setprecision(3) << sqrt(getNumber()) << endl;
        }
        else if (a == 4)
        {
            int fact = getNumber();
            int result = 1;
            for (int i = 1; i < fact + 1; i++)
            {
                result = result * i;
            }
            cout << "the factorial of " << getNumber() << " is " << fixed << setprecision(3) << result << endl;
        }
        else
        {
            exit(0);
        }
    }
    void chooseOptionForSimple(char s)
    {
        if (s == '+')
        {
            cout << "the sum of " << getNumber1() << " and " << getNumber2() << " is " << fixed << setprecision(3) << getNumber1() + getNumber2() << endl;
        }
        else if (s == '-')
        {
            cout << "the difference of " << getNumber1() << " and " << getNumber2() << " is " << fixed << setprecision(3) << getNumber1() - getNumber2() << endl;
        }
        else if (s == '*')
        {
            cout << "the multiplication of " << getNumber1() << " and " << getNumber2() << " is " << fixed << setprecision(3) << getNumber1() * getNumber2() << endl;
        }
        else if (s == '/')
        {
            cout << "the division of " << getNumber1() << " and " << getNumber2() << " is " << fixed << setprecision(3) << getNumber1() / getNumber2() << endl;
        }
    }
};

int main()
{
    int option, a;
    float r1, r2;
    char operation;
    Result r;
    cout << "-----USE ME FOR FASTER CALCULATION-----" << endl;
    cout << "**Press 1 for using simple calculator**" << endl;
    cout << "**Press 2 for using scientific calculator**" << endl;
    cin >> a;
    if (a == 1)
    {
        cout << "Enter the number 1" << endl;
        cin >> r1;
        cout << "Enter the number 2" << endl;
        cin >> r2;
        r.setNumbers(r1, r2);
        cout << "Enter the operator" << endl;
        cin >> operation;
        r.chooseOptionForSimple(operation);
    }
    else if (a == 2)
    {
        cout << "Enter the number" << endl;
        cin >> r1;
        r.setNumber(r1);
        r.chooseOperationForScientific();
        cin >> option;
        r.chooseOptionForScientific(option);
    }
    else
    {
        exit(0);
    }

    return 0;
}