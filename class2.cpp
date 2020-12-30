// OOPS --> CLASSES AND OBJECT
// C++ --> INITIALLY CALLED C WITH CLASSES
// CLASS --> EXTENSION WITH STRUCTURE(IN C)
// STRUCTURE HAD LIMITATION --> MEMBER ARE PUBLIC
// --> NO METHOD
// CLASSES --> STRUCTURE AND MORE
// CLASSES HAVE METHOD AND PROPERTIES
// CLASSES --> PRIVATE AND PUBLIC
// STRUCTURE IN C++ ARE TYPEDEF
// CAN DECLARE OBJECT ALONG WITH THE CLASS DECLARATION
/*class Employee{
        Class defination
    }harry, rohan , lovish;*/
// nesting of member function

#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

class binary
{
private: //by default all member are private
    void chk_bin(void);
    string s;

public:
    void read(void);
    void ones_compliment(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary ::ones_compliment(void)
{
    chk_bin(); //function can be used inside another function of public
    cout << "Display your ones compliment number";
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary ::display(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{

    binary b;
    b.read();
    // b.chk_bin();//its in private function
    b.ones_compliment();
    cout << endl;
    b.display();

    return 0;
}