#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <fstream>
#include <string>
#include <cstdio>
#include <algorithm>
using namespace std;

//MAP is an associative array

int main()
{
    map<string, int> marksMap;
    marksMap["Harry"] = 58;
    marksMap["Rohan"] = 2;
    marksMap["jack"] = 58;

    marksMap.insert({{"Kozume", 169}, {"kurro", 155}});
    map<string, int>::iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << "\n";
    }

    return 0;
}