#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <fstream>
#include <string>
#include <cstdio>
#include <algorithm>
using namespace std;
//LINKED LIST -->

void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
int main()
{
    list<int> list1; //list of zero length
    list1.push_back(1);
    list1.push_back(2);
    list1.push_back(6);
    list1.push_back(5);
    list1.push_back(4);
    list1.push_back(3);
    list1.push_back(7);

    // list<int>::iterator iter;
    // iter = list1.begin();
    // cout << *iter << " ";
    // iter++;
    // cout << *iter << " ";
    // iter++;
    // cout << *iter << " ";
    // iter++;
    // cout << *iter << " ";

    // display(list1);
    // list1.pop_back();
    // display(list1);
    // list1.pop_front();
    // display(list1);
    // list1.remove(3);

    //SORTING the LIST
    list1.sort();
    display(list1);

    list<int> list2(3); //empty list of size 7
    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 6;
    iter++;
    *iter = 9;
    iter++;
    list2.sort();
    display(list2);
    //MERGE two list
    list1.merge(list2);
    cout << "list after merge" << endl;
    //Reverse the list
    list1.reverse();
    display(list1);
    return 0;
}