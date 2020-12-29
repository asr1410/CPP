// types of header files
//1. system header files comes with compiler
#include <iostream>
using namespace std;
//2. user defined header files written by programmer
//#include"this.h"// this will produce a error if not in the directory

int main()
{
    int a = 9;
    int b = 3;
    cout << "operator in c++ : " << endl;
    cout << "following are the operator of c++" << endl;

    //Arithmetic operator
    cout << "the value of a+b is " << a + b << endl;
    cout << "the value of a-b is " << a - b << endl;
    cout << "the value of a*b is " << a * b << endl;
    cout << "the value of a/b is " << a / b << endl;
    cout << "the value of a%b is " << a % b << endl;
    cout << "the value of a++ is " << a++ << endl;
    cout << "the value of b++ is " << b++ << endl;
    cout << "the value of ++b is " << ++b << endl;
    cout << "the value of ++a is " << ++a << endl;
    cout << endl;

    //ASSIGNMENT OPERATOR
    // int a = 3;
    // char c = 'u';

    //COMPARISON OPERATOR
    cout << "following are the comparison operator in C++" << endl;
    cout << "the value of a==b is " << (a == b) << endl;
    cout << "the value of a!=b is " << (a != b) << endl;
    cout << "the value of a>b is " << (a > b) << endl;
    cout << "the value of a<b is " << (a < b) << endl;
    cout << "the value of a<=b is " << (a <= b) << endl;
    cout << "the value of a>=b is " << (a >= b) << endl
         << endl;

    //LOGICAL OPERATOR
    cout << "following are the Logical operator in C++" << endl;
    cout << "the value of this logocal operator ((a > b) && (a == b)) is" << ((a > b) && (a == b)) << endl;
    cout << "the value of this logocal operator ((a > b) || (a == b)) is" << ((a > b) || (a == b)) << endl;
    cout << "the value of this logocal operator (!(a==b)) is" << (!(a == b)) << endl;

    return 0;
}
