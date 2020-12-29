#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
void swap_with_pointer(int *a, int *b);
void swap_with_reference_variable(int &a, int &b);

int main()
{
    int num1, num2;
    cout << "**** PROGRAM TO SWAP TO NUMBERS ****" << endl;
    cout << "Enter the first number" << endl;
    cin >> num1;
    cout << "Enter the second number" << endl;
    cin >> num2;

    //FIRST METHOD TO SWAP NUMBERS
    //Without using third variable
    // num1 = num1 * num2;
    // num2 = num1 / num2;
    // num1 = num1 / num2;
    // cout << "first number is " << num1 << " second number " << num2 << endl;

    //SECOND METHOD TO SWAP NUMBERS
    //Without using third variable
    // num1 = num1 + num2;
    // num2 = num1 - num2;
    // num1 = num1 - num2;
    // cout << "first number is " << num1 << " second number " << num2 << endl;

    //THIRD METHOD TO SWAP NUMBERS
    //Without using third variable
    // num1 = num1 ^ num2;
    // num2 = num1 ^ num2;
    // num1 = num1 ^ num2;
    // cout << "first number is " << num1 << " second number " << num2 << endl;

    //FOURTH METHOD TO SWAP NUMBERS
    //With the help of temp variable
    // int temp;
    // temp = num1;
    // num1 = num2;
    // num2 = temp;
    // cout << "first number is " << num1 << " second number " << num2 << endl;

    //FIFTH METHOD TO SWAP NUMBERS
    //With the help of  function using pointer
    // swap_with_pointer(&num1, &num2);
    // cout << "first number is " << num1 << " second number " << num2 << endl;

    //LAST METHOD TO SWAP NUMBERS
    //With the help of  function using reference variable
    //THIS FEATURE IS IN C++
    swap_with_reference_variable(num1, num2);
    cout << "first number is " << num1 << " second number " << num2 << endl;

    return 0;
}

void swap_with_pointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap_with_reference_variable(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}