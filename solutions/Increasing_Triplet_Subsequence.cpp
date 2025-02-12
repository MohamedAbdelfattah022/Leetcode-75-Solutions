#include <bits/stdc++.h>
using namespace std;

// Greedy Approach
class Solution {
   public:
    bool increasingTriplet(vector<int>& nums) {
        int first = INT_MAX, second = INT_MAX;

        for (auto num : nums) {
            first = min(first, num);
            if (num > first)
                second = min(second, num);

            if (num > second)
                return true;
        }

        return false;
    }
};

// Binaary Search Approach
class Solution {
   public:
    bool increasingTriplet(vector<int>& nums) {
        vector<int> lis;

        for (int num : nums) {
            auto it = lower_bound(lis.begin(), lis.end(), num);
            if (it == lis.end()) {
                lis.push_back(num);
            } else {
                *it = num;
            }
            if (lis.size() >= 3)
                return true;
        }

        return false;
    }
};