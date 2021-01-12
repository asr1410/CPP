#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <fstream>
#include <string>
#include <cstdio>
#include <algorithm>
using namespace std;

template <class T>
void display(vector<T> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        // cout << v.at(i) << " "; //give the position of the elements
    }
    cout << endl;
}
int main()
{
    // vector<int> vec1;     //zero length int vector
    // vector<char> vec2(4); // four element character vector
    // vec2.push_back('5');
    // display(vec2);
    // vector<char> vec3(vec2);// four elemnt vector character from vector 2
    // display(vec3);
    vector<int> vec4(4, 3); //4 element vector of 3s
    display(vec4);
    int element, size;
    cout << vec4.size();
    // cout << "enter the size of the vector" << endl;
    // cin >> size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << "enter an element to add  this vector ";
    //     cin >> element;
    //     vec1.push_back(element);
    // }
    // vec1.pop_back();
    // display(vec1);
    // vector<int>::iterator iter = vec1.begin();
    // vec1.insert(iter + 1, 5, 556);
    // vec1.insert(position of the element from the from the base, multiple of elements, element you want to insert);
    // display(vec1);

    return 0;
}