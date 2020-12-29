#include <iostream>
#include <algorithm>
using namespace std;

//HERE WE USE RECURSIVE AS IT IS EASY AND COMPACT
int factorial(int n)
{
    if (n < 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

//WE DON,T PREFER FIBONACCI OVER ITERATIVE APPROCH AS IT CREATE A MULTIPLE EXECUTION OF SAME LOOP
int fibonacci(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else if (n < 4)
    {
        return 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    int num;
    cout << "Enter the positive number" << endl;
    cin >> num;
    cout << "The factorial is " << factorial(num) << endl;
    cout << "Fibonnaci value at the given place is " << fibonacci(num) << endl;
    return 0;
}