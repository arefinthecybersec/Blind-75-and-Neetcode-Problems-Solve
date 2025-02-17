class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() == 0) return 0;
        if(s.size() == 1) return 1;

        int mx = INT_MIN;
        unordered_set<char> st;

        int i = 0, j = 0;
        while(j < s.size()) {
            if(st.find(s[j]) == st.end()) {
                mx = max(mx, j-i+1);
                st.insert(s[j]);
                j++;
            }
            else {
                st.erase(s[i]);
                i++;
            }
        }
        return mx;
    }
};