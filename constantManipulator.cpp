#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    // int a = 30;
    // char c = 'c';
    // cout << "the value of a was " << a << endl;
    // cout << "the value of c was " << c << endl;
    // a = 45;
    // c = '4';
    // cout << "the value of a is " << a << endl;
    // cout << "the value of c is " << c << endl;
    // //const in c++
    // const int x = 55;
    // cout << "the value of x was " << x << endl;
    // //x = 30; //constant cannot be changed
    // cout << "the value of x was " << x << endl;

    // MANIPULATOR IN C++
    // int d = 5, e = 6464, f = 75464;

    // cout << "the value of d is " << d << endl;
    // cout << "the value of e is " << e << endl;
    // cout << "the value of f is " << f << endl
    //      << endl;
    // cout << "the value of d is " << setw(5) << d << endl;
    // cout << "the value of e is " << setw(5) << e << endl;
    // cout << "the value of f is " << setw(5) << f << endl;

    //OPERATOR PRECEDENCE
    int a = 3, b = 4;
    int c = ((((a * 5) + b) - 45) + 87);
    cout << c << endl;
    return 0;
}