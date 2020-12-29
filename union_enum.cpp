#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
union types_of_money
//create the size according to the largest data size
{
    int dollar;
    float rupee;
    char fav_char;
} emp1;
typedef types_of_money money;

//struct type_of_money emp2; // not valid inside main function

money emp3;

int main()
{
    enum meal
    {
        breakfast,
        lunch,
        dinner
    };

    meal m1 = breakfast;
    cout << m1 << endl;

    meal m2 = lunch;
    cout << m2 << endl;

    cout << (m1 == 0) << endl; //can be used as a condition

    cout << breakfast << endl;
    money emp4;
    cin >> emp1.dollar;
    cout << "Emp 1 : " << emp1.dollar << endl; //It will print the correct data as we print ir before initialize it a other variable
    cin >> emp1.rupee;
    cout << "Emp 1 : " << emp1.dollar << endl; //It will print a garbage data as we can only hold one data
    cin >> emp3.dollar;
    cout << "Emp 2 dollar : " << emp3.dollar << endl;
    cout << "Emp 1 ruppee : " << emp1.rupee << endl;
    cin >> emp4.fav_char;
    cout << "Emp 4 fav char : " << emp4.fav_char << endl;

    return 0;
}