#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        reverse(s.begin(), s.end()); // Reverse entire string first
        
        int i = 0, end = 0;
        while (i < n) {
            // Skip spaces
            while (i < n && s[i] == ' ') i++;
            if (i >= n) break;

            int start = end; // start of the current word

            // Copy non-space chars forward
            while (i < n && s[i] != ' ') {
                s[end++] = s[i++];
            }

            // Reverse the current word to restore its correct order
            reverse(s.begin() + start, s.begin() + end);

            // Add one space after each word
            s[end++] = ' ';
        }

        // Remove the trailing space if it exists
        if (end > 0 && s[end - 1] == ' ') end--;

        s.resize(end);
        return s;
    }
};
