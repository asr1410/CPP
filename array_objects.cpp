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
        cout << "Enter the id of employee " << endl;
        cin >> id;
        cout << "Enter the salary " << endl;
        cin >> salary;
    }
    void getId(void)
    {
        cout << "The salary of employee with Emp_Id " << id << " is " << salary << endl;
        cout << endl;
    }
};

int main()
{
    // Employee abhishek, aman, ayushi;
    // abhishek.setId();
    // abhishek.getId();
    int n;
    cout << "Enter the number of employee you want to enter" << endl;
    cin >> n;
    Employee fb[n]; //for declare large value of classes
    for (int i = 0; i < n; i++)
    {
        fb[i].setId();
    }
    for (int i = 0; i < n; i++)
    {
        fb[i].getId();
    }

    // fb[1].getId();
    // fb[0].getId();
    return 0;
}