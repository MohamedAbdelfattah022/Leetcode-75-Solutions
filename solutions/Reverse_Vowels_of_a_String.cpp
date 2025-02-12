#include <bits/stdc++.h>
using namespace std;

// Two Pointers
class Solution {
    bool vowel(char c) {
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    }

   public:
    string reverseVowels(string s) {
        int l = 0;
        int r = s.length() - 1;

        while (l < r) {
            while (l < r && !vowel(s[l])) {
                l++;
            }
            while (l < r && !vowel(s[r])) {
                r--;
            }
            if (l < r) {
                swap(s[l], s[r]);
                l++, r--;
            }
        }

        return s;
    }
};

// Stack
class Solution {
    bool vowel(char c) {
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') ||
               (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    }

   public:
    string reverseVowels(string s) {
        stack<char> vowels;
        for (auto c : s)
            if (vowel(c))
                vowels.push(c);

        for (auto& c : s)
            if (vowel(c)) {
                c = vowels.top();
                vowels.pop();
            }

        return s;
    }
};