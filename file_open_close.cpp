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
    //write  a  file
    // ofstream out;
    // out.open("samplea.txt");
    // out << "this is me";
    // out << "this is also me";
    // out << "this is asli me";
    // out.close();

    ifstream in;
    string st1, st2;
    in.open("samplea.txt");
    // in >> st1 >> st2;
    while (in.eof() == 0)
    {
        getline(in, st1);
        cout << st1 << endl;
    }

    // cout << st1 << st2;
    in.close();
    return 0;
}