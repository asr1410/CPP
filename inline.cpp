#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

//INLINE FUNCTION
//USE FOR SMALL FUNCTION
//NOT USED FOR STATIC VARIABLE
inline int multiple(int a, int b)
{
    // static int c = 0;
    // c++;
    // return a * b + c;
    return a * b;
}

//Here rate is default parameter if value is not given
float intrest(int money, int year, float rate = 1.05)
{
    return money * year * rate;
}

int main()
{
    // int num1, num2;
    // cout << "Enter first number" << endl;
    // cin >> num1;
    // cout << "Enter second number" << endl;
    // cin >> num2;
    // cout << "Multiplication of a and b is " << multiple(num1, num2) << endl;
    // cout << "Multiplication of a and b is " << multiple(num1, num2) << endl;
    // cout << "Multiplication of a and b is " << multiple(num1, num2) << endl;
    // cout << "Multiplication of a and b is " << multiple(num1, num2) << endl;

    //DEFAULT PARAMETER IN FUNCTION
    int money, year;
    cout << "Enter the money" << endl;
    cin >> money;
    cout << "Enter for how many year" << endl;
    cin >> year;
    cout << "The money you will recieve on principle of " << money << " after " << year << "year is " << intrest(money, year) << endl;
    cout << "The money you will recieve on principle of " << money << " after " << year << "year is " << intrest(money, year, 1.1) << endl;

    return 0;
}