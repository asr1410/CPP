#include <iostream>
using namespace std;

int main()
{

    int a = 5;
    int *p;
    p = &a;
    cout << "the value of a is " << a << endl;
    cout << "the value of a in p is " << *p << endl;
    cout << "the address value of a is " << &a << endl;
    cout << "the address value of a  in p is " << p << endl;
    cout << "the address value of p is " << &p << endl;
    cout << "the address value of p + 0 is " << p + 0 << endl;
    cout << "the address value of p + 1 is " << p + 1 << endl;
    cout << "the address value of p + 2 is " << p + 2 << endl;
    cout << "the address value of p + 3 is " << p + 3 << endl;
    cout << "the address value of p + 4 is " << p + 4 << endl;
    cout << "the address value of p + 5 is " << p + 5 << endl;

    int **dp = &p;
    cout << "the value of a at **dp(&p(&a)) is " << **dp << endl;
    cout << "the value of *dp is " << *dp << endl;
    cout << "the value of dp is " << dp << endl;
    cout << "the value of dp + 1 is " << dp + 1 << endl;
    cout << "the value of dp + 2 is " << dp + 2 << endl;
    cout << "the value of dp + 3 is " << dp + 3 << endl;
    cout << "the value of dp + 4 is " << dp + 4 << endl;
    cout << "the value of dp + 5 is " << dp + 5 << endl;
    cout << "the value of &dp is " << &dp << endl;

    return 0;
}