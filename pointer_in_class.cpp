#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <string>
#include <cstdio>
#include <algorithm>
using namespace std;

class Shop
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData(void)
    {
        cout << "Code of this item is " << id << endl;
        cout << "Price of this item is " << price << endl;
    }
};

// 1 2 3 ^ ^ | |
//     | |
//     | ptr ptrTemp

int main()
{
    int size = 3;
    int p;
    float q;
    // int *ptr = new int[34];
    // int *ptr = new int[34];
    Shop *ptr = new Shop[size];
    Shop *ptrTemp = ptr;
    // general store item
    // veggies item
    // hardware item
    for (int i = 0; i < size; i++)
    {
        cout << "Enter id and price of the item " << i + 1;
        cin >> p >> q;
        ptr->setData(p, q);
        ptr++;
    }

    for (int i = 0; i < size; i++)
    {
        cout << "item number " << i + 1 << endl;
        ptrTemp->getData();
        ptrTemp++;
    }

    return 0;
}