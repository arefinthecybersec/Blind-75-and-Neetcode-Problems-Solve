class Solution {
public:
    int strStr(string haystack, string needle) {
        int j = 0;
        for(int i = 0; i < haystack.size(); i++) {
            char c = needle[j];
            
            if(haystack[i] == c) {
                j++;
            }
            else {
                i -= j; j = 0;
            }

            if(j == needle.size()) {
                return (i - needle.size() + 1);
            }
        }
        return -1;
    }
};