#include <iostream>
#include <cmath>
#include <string>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

class coordinate
{
private:
    float x1;
    float y1;
    float x2;
    float y2;
    double total;
    friend class calculator;

public:
    // void getFirstCoordinate(void)
    // {
    //     float a1, b1;
    //     cout << "Enter the coordinate of first pofloat --> " << endl;
    //     cout << "value of x -->" << endl;
    //     cin >> a1;
    //     cout << "value of y -->" << endl;
    //     cin >> b1;
    //     x1 = a1;
    //     y1 = b1;
    // }
    // void getSecondCoordinate(void)
    // {
    //     float a2, b2;
    //     cout << "Enter the coordinate of second pofloat --> " << endl;
    //     cout << "value of x -->" << endl;
    //     cin >> a2;
    //     cout << "value of y -->" << endl;
    //     cin >> b2;
    //     x2 = a2;
    //     y2 = b2;
    // }
    void getFirstCoordinate(float a1, float b1)
    {
        cout << "Entered value of first coordinate --> " << endl;
        cout << "value of x -->" << a1 << endl;
        cout << "value of y -->" << b1 << endl;
        x1 = a1;
        y1 = b1;
    }
    void getSecondCoordinate(float a2, float b2)
    {
        cout << "Entered value of Second coordinate --> " << endl;
        cout << "value of x -->" << a2 << endl;
        cout << "value of y -->" << b2 << endl;
        x2 = a2;
        y2 = b2;
    }

    // void distanceCalculator()//Its direct method for calling root function
    // {
    //     double dist;
    //     dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) * 1.0);
    //     cout << "The distance calculated is -->" << fixed << setprecision(2) << dist << endl;
    // }
};

//Help of another class
class calculator
{
public:
    void distanceCalculator(coordinate c1, coordinate c2)
    {
        double total = sqrt(pow(c2.x2 - c1.x1, 2) + pow(c2.y2 - c1.y1, 2) * 1.0);
        cout << "The distance calculated is -->" << fixed << setprecision(2) << total << endl;
    }
};

int main()
{
    coordinate c1, c2;
    c1.getFirstCoordinate(8, 8);
    c2.getSecondCoordinate(0, 0);
    calculator d;
    d.distanceCalculator(c1, c2);
    // c1.distanceCalculator();//public function of the coordinate class

    return 0;
}