#include <bits/stdc++.h>
using namespace std;

// Implementation 1
class Solution {
   public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());

        int start = 0;
        int end = 0;
        int i = 0;

        while (start < s.size()) {
            while (start < s.size() && s[start] == ' ')
                start++;
            if (start >= s.size())
                break;

            end = start;
            while (end < s.size() && s[end] != ' ')
                end++;

            reverse(s.begin() + start, s.begin() + end);

            if (i != 0)
                s[i++] = ' ';
            while (start < end)
                s[i++] = s[start++];
        }

        s.erase(s.begin() + i, s.end());
        return s;
    }
};

// Implementation 2
class Solution {
   public:
    string reverseWords(string s) {
        s.erase(0, s.find_first_not_of(' '));
        s.erase(s.find_last_not_of(' ') + 1);

        string result;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ' ') {
                result += s[i];
            } else if (result.back() != ' ') {
                result += ' ';
            }
        }

        reverse(result.begin(), result.end());

        int start = 0;
        for (int i = 0; i <= result.size(); i++) {
            if (i == result.size() || result[i] == ' ') {
                reverse(result.begin() + start, result.begin() + i);
                start = i + 1;
            }
        }

        return result;
    }
};