#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int countKDifference(vector<int> &nums, int k)
    {
        int cnt[101] = {}, res = 0;
        for (auto n : nums)
            cnt[n]++;
        for (int i = k + 1; i < 101; ++i)
            res += cnt[i] * cnt[i - k];
        return res;
        // int count = 0;
        // for (int i = 0; i < nums.size(); i++)
        // {
        //     for (int j = i + 1; j < nums.size(); j++)
        //     {
        //         if (nums[i] - nums[j] == -k || nums[i] - nums[j] == k)
        //         {
        //             count++;
        //         }
        //     }
        // }
        // return count;
    }
};
int main()
{
    vector<int> v = {3, 2, 1, 5, 4};
    int k = 2;
    Solution s;
    cout << s.countKDifference(v, k) << endl;
    return 0;
}