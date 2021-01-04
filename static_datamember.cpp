//STATIC VARIABLE AND STATIC FUNCTION
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
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }
    static void getCount(void)
    {
        // count << id; //Throw an error
        cout << "the value of cout is " << count << endl;
    }
};

int Employee::count; //Default value is zero
int main()
{

    Employee aman, abhishek, ayushi;
    // harry.id =1;
    // harry.count=1; cannot do this as id and count is private
    aman.setData();
    aman.getData();
    Employee::getCount();

    ayushi.setData();
    ayushi.getData();
    Employee::getCount();

    abhishek.setData();
    abhishek.getData();
    Employee::getCount();

    return 0;
}