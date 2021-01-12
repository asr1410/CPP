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
    // conning our file with out stream
    ofstream out("samplea.txt");

    // Creating a name string filling it with the string entered by the user
    cout << "Enter your name :- ";
    string name;
    cin >> name;

    // Writing a string to the file
    out << "My name is " << name;

    out.close();

    // Read from the file
    ifstream in("samplea.txt");
    string content;

    in >> content; // for reading a single word from the text file
    // getline(in, content); //get the whole line from the txt file
    cout << "the data in the file is " << content;
    in.close();

    return 0;
}