#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

//Function prototype
//int sum(int a,int b );//valid prototype
int sum(int, int); //valid prototype
//void intro(void);//valid
void intro();

int main()
{
    int num1, num2;
    cout << "Addition of two numbers" << endl;
    cout << "Enter first number" << endl;
    cin >> num1;
    cout << "Enter second number" << endl;
    cin >> num2;
    int result = sum(num1, num2);
    cout << result;
    intro();

    return 0;
}

//Declaration of function
int sum(int a, int b)
{
    int c = a + b;
    return c;
}

void intro(void) //void intro()can be vlank to
{
    cout << "\nHELLO, Good Morning ";
}