#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
class complex
{
private:
    int a;
    int b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    //below line means that non members - sum complex is allowed to access my private data
    friend complex sumComplex(complex o1, complex o2);

    void complexSum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

complex sumComplex(complex n1, complex n2)
{
    complex o3;
    o3.setNumber((n1.a + n2.a), (n1.b + n2.b));
    return o3;
}
int main()
{
    complex c1, c2, c3, sum;
    c1.setNumber(1, 2);
    c1.printNumber();

    c2.setNumber(2, 4);
    c2.printNumber();

    c3.complexSum(c1, c2);
    c3.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();
    return 0;
}
/*
Friend function 
1. not in the scope of the class
2. since it is not in the class it cannnot callled from the object of the class.
c1.complex()== invalid 
3. Can be invoked without the help of any object
4. ususally contain the object as arguments
5. can be declared inside public or private part of the class
6. cannot access the member directly by their names and need object_name.member to access any member
*/