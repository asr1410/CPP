//PROGRAM ON FUNCTION OVERLOADING
//Function overloading is a feature in C++ where two or more functions can have the same name but different parameters.
//Function overloading can be considered as an example of polymorphism feature in C++.

#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

//SUM OF THREE NUMBER
int sum(int a, int b, int c)
{
    return a + b + c;
}

//SUM OF TWO NUMBER
int sum(int a, int b)
{
    return a + b;
}

//VOLUME FOR CUBE
int volume(int a)
{
    return (a * a * a);
}

//VOLUME OF CUBOID
int volume(int a, int b, int c)
{
    return (a * b * c);
}

//VOLUME OF CYLYNDER
float volume(int height, int radius)
{
    return (3.14 * height * radius);
}

int main()
{
    int n1, n2, n3;
    cout << "THE SUM OF 3 AND 5 IS " << sum(3, 5) << endl;
    cout << "THE SUM OF 3 AND 5 AND 8 IS " << sum(3, 5, 8) << endl;
    cout << "THE VOLUME OF CUBE IS " << volume(5) << endl;
    cout << "THE VOLUME OF CYLYNDER IS " << volume(7, 7) << endl;
    cout << "THE VOLUME OF CUBOID IS " << volume(5, 5, 5) << endl;
    return 0;
}