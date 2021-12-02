#include <bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        int j = n - i - 1;
        int k = 1 + 2 * i;
        int l = n - i - 1;
        while (j-- > 0)
        {
            cout << "*";
        }
        while (k-- > 0)
        {
            cout << ".";
        }
        while (l-- > 0)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < n - 1; i++)
    {
        int j = i + 1;
        int k = 2 * (n - 1) - 1 - 2 * i;
        int l = i + 1;
        while (j-- > 0)
        {
            cout << "*";
        }
        while (k-- > 0)
        {
            cout << ".";
        }
        while (l-- > 0)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "enter the number" << endl;
    cin >> n;
    pattern(n);
    return 0;
}