#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <string>
#include <cstdio>
#include <algorithm>
using namespace std;
/*
Inheritence resolve ambiguous using virtual
1. Student class-->[DONE]
2. Marks Class -->[DONE]
3. Score Class -->[DONE]
4. Result class--> Marks + Score -->[DONE] 
*/
class Students
{
protected:
    int rollNo;

public:
    void setRollNo(int a)
    {
        rollNo = a;
    }
    void getRollNo(void)
    {
        cout << "The roll no is: " << rollNo << endl;
    }
};

class Marks : virtual public Students
{
protected:
    float maths, physics;

public:
    void setMarks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void getMarks(void)
    {
        cout << "Marks in maths are: " << maths << endl;
        cout << "Marks in physics are: " << physics << endl;
    }
};

class Score : virtual public Students
{
protected:
    float score;

public:
    void setScore(float m3)
    {
        score = m3;
    }
    void getScore(void)
    {
        cout << "Score in physical education is: " << score << endl;
    }
};

class Total : public Marks, public Score
{
private:
    float total;

public:
    void setTotal()
    {
        total = maths + physics + score;
    }
    void displayResult()
    {
        getRollNo();
        getMarks();
        getScore();
        setTotal();
        cout << "Your total marks are: " << total << endl;
    }
};

int main()
{
    Total aman;
    aman.setRollNo(111);
    aman.setMarks(95.5, 87);
    aman.setScore(90);
    aman.displayResult();
    return 0;
}