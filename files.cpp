#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <fstream>
#include <string>
#include <cstdio>
#include <algorithm>
using namespace std;

/*
the useful classes for working with files in c++
1. fstreambase
2. ifstream --> derived from fstreambase
3. ofstream --> derived from fstreambase
*/

// in order work with files in c++ ,you will have to open it.primarily there are 2 ways to open a filebu
// 1. constructor
// 2. using member function to open() of the class
int main()
{
    string st = "harry bhai";
    string st2;
    //open file using constructor
    // ofstream out("sample.txt"); //write operation
    // out << st;

    //open file using constructor and reading from it
    ifstream in("sample.txt"); //read operation
    // in >> st2;
    getline(in, st2);
    cout << st2;
    return 0;
}