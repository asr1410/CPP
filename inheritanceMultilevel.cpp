#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <string>
#include <cstdio>
#include <algorithm>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number();
};
void Student ::set_roll_number(int r)
{
    roll_number = r;
}
void Student ::get_roll_number()
{
    cout << "the roll number is " << roll_number << endl;
}

class Exam : public Student
{
protected:
    float math;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam::set_marks(float m1, float m2)
{
    math = m1;
    physics = m2;
}
void Exam::get_marks()
{
    cout << "the marks in maths are " << math << endl;
    cout << "the marks in physics are " << physics << endl;
}

class Result : public Exam
{
    float percentage;

public:
    void display(void);
};

void Result ::display()
{
    get_roll_number(); //calling function inside another function
    get_marks();
    cout << "Your result percentage is " << (math + physics) / 2 << "%" << endl;
}

int main()
{
    /*
    NOTE:
    1. we are inheriting B from A and C from B [A-->B-->C]
    2. A is the base class of B and B is the base class of C.
    3. A-->B-->C are called Inheritance path
    */
    Result aman;
    aman.set_roll_number(11);
    aman.set_marks(87.5, 90.0);
    aman.display();
    // aman.get_marks();//We can declare them sperately
    // aman.get_roll_number();
    return 0;
}