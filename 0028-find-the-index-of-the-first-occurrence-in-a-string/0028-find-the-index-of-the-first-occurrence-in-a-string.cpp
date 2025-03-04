class Solution {
public:
    int strStr(string haystack, string needle) {
        int N = haystack.size(), M = needle.size();
        if (M == 0) return 0;
        
        vector<int> LPS = computeLPS(needle);
        int i = 0, j = 0;
        
        while (i < N) {
            if (haystack[i] == needle[j]) {
                i++; j++; 
            }
            if (j == M) return i - M; 
            
            if (i < N && haystack[i] != needle[j]) {
                if (j != 0) j = LPS[j - 1]; 
                else i++; 
            }
        }
        return -1;
    }
    
    vector<int> computeLPS(string needle) {
        int M = needle.size();
        vector<int> LPS(M, 0);
        int len = 0, i = 1;
        
        while (i < M) {
            if (needle[i] == needle[len]) {
                LPS[i] = len + 1;
                len++; i++;
            } else {
                if (len != 0) len = LPS[len - 1];
                else LPS[i++] = 0;
            }
        }
        return LPS;
    }
};
