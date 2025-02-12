#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    bool isSubsequence(string s, string t) {
        int idx = 0;
        for (auto ch : t) {
            if (idx < s.size() && ch == s[idx])
                idx++;
        }

        if (idx == s.size())
            return true;
        else
            return false;
    }
};