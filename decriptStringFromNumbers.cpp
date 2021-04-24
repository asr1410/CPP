#include <bits/stdc++.h>
using namespace std;
class Solutioin
{
    string s;
    int a, b;

public:
    void getString(string s)
    {
        this->s = s;
    }
    string freqAlphabets(string s)
    {
        string ans = "";
        for (int i = 0; i < s.length();)
        {
            if (i + 2 < s.length() && s[i + 2] == '#')
            {
                int ss = (s[i] - '0') * 10 + (s[i + 1] - '0');
                ans += char(ss + 'a' - 1);
                i += 3;
            }
            else
            {
                ans += char(s[i] - '0' - 1 + 'a');
                ++i;
            }
        }
        return ans;
    }
};
int main()
{
    string s = "10#11#12";
    Solutioin s;
    return 0;
}