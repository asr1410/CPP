#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <string>
#include <cstdio>
#include <algorithm>
using namespace std;

class BankDeposit
{
    int principle;
    int years;
    float interestRate;
    float returnValue;

public:
    BankDeposit()
    {
    }
    BankDeposit(int p, int r, int t);   //interest rate can be in whole number
    BankDeposit(int p, float r, int t); //interest rate can be of the decimal value
    void ShowAmount();
};

BankDeposit::BankDeposit(int p, int r, int t)
{
    principle = p;
    years = t;
    interestRate = float(r) / 100;
    returnValue = principle;
    cout << "running int" << endl;
    for (int i = 0; i < years; i++)
    {
        returnValue *= (1 + r);
    }
};

BankDeposit::BankDeposit(int p, float r, int t)
{
    principle = p;
    years = t;
    interestRate = r;
    returnValue = principle;
    cout << "running float" << endl;
    for (int i = 0; i < years; i++)
    {
        returnValue *= (1 + r);
    }
};

void BankDeposit::ShowAmount()
{
    cout << "The principle amount -->" << principle << endl;
    cout << "At rate of interest -->" << interestRate << endl;
    cout << "For no of years -->" << years << endl;
    cout << "Return amount will be -->" << returnValue << endl;
}

int main()
{
    BankDeposit a, b, c;
    int p, t, r;
    cout << "Enter the principle amount" << endl;
    cin >> p;
    cout << "Enter the interest rate" << endl;
    cin >> r;
    cout << "Enter the years" << endl;
    cin >> t;
    a = BankDeposit(p, r, t);
    a.ShowAmount();

    return 0;
}