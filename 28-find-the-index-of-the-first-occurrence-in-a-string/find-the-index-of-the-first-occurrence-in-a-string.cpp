class Solution {
public:
    int strStr(string haystack, string needle) {
        int i = 0, j = 0;

        if(needle.empty()) return 0; // edge case

        while(i < haystack.length()) {
            if(j < needle.length() && haystack[i] == needle[j]) {
                ++i;
                ++j;
            } else {
                i = i - j + 1; 
                j = 0;         
            }

            if(j == needle.length())
                return i - j; 
        }

        return -1;
    }
};