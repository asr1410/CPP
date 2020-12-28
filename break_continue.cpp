//WORKING OF BREAK AND CONTINUE
#include <iostream>
using namespace std;

int main()
{
    int num, range;
    cout << "Enter the number to get table" << endl;
    cin >> num;
    cout << "Range upto get multiply" << endl;
    cin >> range;
    for (int i = 1; i < range + 1; i++)
    {
        if (i % 2 == 0)
        {
            continue; //Take the loop the next condition
        }
        else if (i % 7 == 0)
        {
            break; //Exit the loop
        }

        cout << num << " X " << i << " = " << num * i << endl;
    }

    return 0;
}