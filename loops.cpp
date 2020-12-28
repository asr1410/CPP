//LOOPS IN C++
#include <iostream>
using namespace std;

int main()
{
    int a, range;
    cout << "Enter the number you wanted to get multiplication table " << endl;
    cin >> a;
    cout << "Enter the range upto : " << endl;
    cin >> range;

    //Working of FOR loop
    // for (Initialization; Condition; Updation)
    // {
    //     FUNCTION WHERE CONDITION TAKES PLACE
    // }
    // for (int i = 1; i < range + 1; i++)
    // {
    //     cout << a << " X " << i << " = " << a * i << endl;
    // }

    //WORKING OF WHILE LOOP
    //INTIALIZATION
    // while (CONDITION)
    // {
    //     FUNCTION WHERE CONDITION TAKES PLACE

    //     UPDATION
    // }
    // int i = 1;
    // while (i < range + 1)
    // {
    //     cout << a << " X " << i << " = " << a * i << endl;
    //     i++;
    // }

    //DO WHILE LOOP
    //INTIALIZATION
    // do
    // {
    //     FUNCTION WHERE CONDITION TAKES PLACE
    //     UPDATION
    // } while (CONDITION);

    // int i = 1;
    // do
    // {
    //     cout << a << " X " << i << " = " << a * i << endl;
    //     i++;
    // } while (i < range + 1);

    return 0;
}