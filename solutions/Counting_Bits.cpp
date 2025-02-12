#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    vector<int> countBits(int n) {
        vector<int> v;
        int c = 0;
        int num = 0;
        while (c <= n) {
            int count = 0;
            num = c;
            while (num) {
                count += num & 1;
                num >>= 1;
            }
            v.push_back(count);
            c++;
        }
        return v;
    }
};