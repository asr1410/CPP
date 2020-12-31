#include <iostream>
#include <cmath>
#include <string>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

class shop
{
    //all the data in the class is private until it is declared public
    int intId[100];
    int numberOfItems[100];
    int counter;

public:
    void initCounter()
    {
        counter = 0;
    }
    void setPrice();
    void displayItems();
} dukkan;
//We can declare the obect here or int the main function too
//shop mall,stall;

void shop ::setPrice(void)
{
    cout << counter << endl;
    cout << "Enter the Id of the product no " << counter + 1 << ":" << endl;
    cin >> intId[counter];
    cout << "Enter the number of items you want -->" << endl;
    cin >> numberOfItems[counter];
    counter++;
}
void shop ::displayItems(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "You requested " << numberOfItems[i] << " items of id number " << intId[i] << endl;
    }
}

int main()
{
    int n;
    cout << "How many product are you going to purchase" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        dukkan.setPrice();
    }
    dukkan.displayItems();

    return 0;
}