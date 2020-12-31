#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

class Employee
{
private:
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 122;
        cout << "Enter the id of employee " << endl;
        cin >> id;
        cout << "Enter the salary " << endl;
        cin >> salary;
    }
    void getId(void)
    {
        cout << "the id of employee is " << id << endl;
        cout << "salary of employee is " << salary << endl;
        cout << endl;
    }
};

int main()
{
    // Employee abhishek, aman, ayushi;
    // abhishek.setId();
    // abhishek.getId();
    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }
    // cout << fb[2].getId; this will throw a error
    return 0;
}