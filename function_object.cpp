#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <fstream>
#include <string>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    //function object(FUNCTOR) :- function wrapped in a class so that it available like an object
    int arr[] = {1, 2, 3, 4, 5, 6, 4, 5, 7, 2, 9};
    // sort(arr, arr + 11);
    sort(arr, arr + 11, greater<int>());
    for (int i = 0; i < 11; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}