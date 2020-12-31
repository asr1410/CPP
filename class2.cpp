//length of a string
// cout << s.length() << endl;
// cout << s.size() << endl;

#include <iostream>
#include <cmath>
#include <string.h>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
class binary
{
private:
    void checkBinary(void);
    string s;

public:
    void read(void);
    void onesComplement(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}

void binary ::checkBinary(void)
{
    cout << "Checking the number weather it is is binary......" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "It is not a bianary number" << endl;
            exit(0);
        }
    }
    cout << "It is a binary number" << endl;
}
void binary ::onesComplement(void)
{
    checkBinary(); //We can declare it inside another variable function of public class
    cout << "1's compliment of inserted binary number" << endl;
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
    cout << s << endl;
}

int main()
{
    binary b;
    b.read();
    // b.checkBinary(); // It will throw a error as it is the private data of the member of the class
    b.onesComplement();
    b.display();

    return 0;
}