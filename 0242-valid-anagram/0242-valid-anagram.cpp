class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        int f = 0;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] != t[i] || s.size() != t.size()) {
                return false;
            }
        }
        return true;
    }
};