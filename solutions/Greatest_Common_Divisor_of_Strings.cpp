#include <bits/stdc++.h>
using namespace std;

// Optimal Solution
class Solution {
   public:
    string gcdOfStrings(string str1, string str2) {
        if (str1 + str2 != str2 + str1)
            return "";

        int gcd = __gcd(str1.size(), str2.size());
        return str1.substr(0, gcd);
    }
};

// Bruteforce approach

class Solution {
    bool isDivisor(string s, string prefix) {
        if (s.size() % prefix.size())
            return 0;

        int repeat = s.size() / prefix.size();
        string x = "";
        while (repeat--)
            x += prefix;

        return x == s;
    }

   public:
    string gcdOfStrings(string str1, string str2) {
        string shorter = (str1.length() < str2.length()) ? str1 : str2;

        for (int i = shorter.length(); i >= 1; i--) {
            string prefix = shorter.substr(0, i);
            if (isDivisor(str1, prefix) && isDivisor(str2, prefix)) {
                return prefix;
            }
        }
        return "";
    }
};