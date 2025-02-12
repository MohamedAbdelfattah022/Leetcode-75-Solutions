#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    int dp[1005] = {};
    int solve(vector<int> &cost, int i = 0) {
        if (i >= cost.size() - 1)
            return 0;

        if (dp[i] != -1)
            return dp[i];

        dp[i] = min(cost[i] + solve(cost, i + 1),
                    cost[i + 1] + solve(cost, i + 2));
        return dp[i];
    }

    int minCostClimbingStairs(vector<int> &cost) {
        fill(dp, &dp[1005], -1);

        return solve(cost);
    }
};