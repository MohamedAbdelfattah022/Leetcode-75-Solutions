#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    vector<int> dp;
    Solution() { dp.assign(410, -1); }

    int rob(vector<int> &nums, int i = 0) {
        if (i >= nums.size()) return 0;
        if (i == nums.size() - 1) return nums[i];
        if (dp[i] != -1) return dp[i];

        dp[i] = max(nums[i] + rob(nums, i + 2),
                    nums[i + 1] + rob(nums, i + 3));

        return dp[i];
    }
};