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
        returnValue *= (1 + interestRate);
    }
};

BankDeposit::BankDeposit(int p, float R, int t)
{
    principle = p;
    years = t;
    interestRate = R;
    returnValue = principle;
    cout << "running float" << endl;
    for (int i = 0; i < years; i++)
    {
        returnValue *= (1 + interestRate);
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
    BankDeposit c1;
    int check, p, r, t;
    float R;
    cout << "choose the option given below" << endl;
    cout << "1. For rate of interest in percentager" << endl;
    cout << "2. for rate in decimal value" << endl;
    cin >> check;
    if (check == 1)
    {
        cout << "Enter the amount to invest --> ";
        cin >> p;
        cout << "Enter the interest in percentage --> ";
        cin >> r;
        cout << "Enter the time for your investment --> ";
        cin >> t;
        c1 = BankDeposit(p, r, t);
        c1.ShowAmount();
    }
    else if (check == 2)
    {
        cout << "Enter the amount to invest --> ";
        cin >> p;
        cout << "Enter the interest in percentage --> ";
        cin >> R;
        cout << "Enter the time for your investment --> ";
        cin >> t;
        c1 = BankDeposit(p, R, t);
        c1.ShowAmount();
    }
    else
    {
        exit(0);
    }

    return 0;
}