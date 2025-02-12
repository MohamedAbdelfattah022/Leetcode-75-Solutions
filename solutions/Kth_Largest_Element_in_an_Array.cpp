#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> maxHeap;
        for (int num : nums)
            maxHeap.push(num);

        while (k-- != 1)
            maxHeap.pop();

        return maxHeap.top();
    }
};