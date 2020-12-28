#include <iostream>
using namespace std;
int glow = 9;
void sum()
{
    // int glow = 6;
    cout << glow;
}
int main()
{
    int a = 10;
    int b = 10;
    glow = 10;
    float pi = 3.14;
    char c = 'u';
    bool d = true;
    cout << glow << d;
    cout << "\nthis looks good. \nHere the value of a is " << a << ".\nthe value of b is " << b;
    cout << "\nthe value of pi is " << pi << "\n";
    cout << "\nthe value of c is " << c;
    sum();
    cout << "\nthe value of glow is " << glow << "\n";

    return 0;
}