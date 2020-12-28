#include <iostream>
using namespace std;
int main()
{
    cout << "this is tutorial of loop and cond" << endl;
    int age;
    cout << "tell me your age " << endl;
    cin >> age;

    //IF ELSE LADDER IN C++
    // if (age < 18 && age >= 1)
    // {
    //     cout << "you cannot come to my party" << endl;
    // }
    // else if (age == 18)
    // {
    //     cout << "you are a kid you require a pass for the party" << endl;
    // }
    // else if (age < 1)
    // {
    //     cout << "enter a valid age" << endl;
    // }
    // else
    // {
    //     cout << "you can come to my party" << endl;
    // }

    //SWITCH CASE IN C++
    switch (age)
    {
    case 18:
        cout << "your age is 18" << endl;
        break;
    case 20:
        cout << "your age is 20" << endl;
        break;
    case 22:
        cout << "your age is 22" << endl;
        break;

    default:
        cout << "no special cases" << endl;
        break;
    }

    return 0;
}
