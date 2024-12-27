class Solution {
public:
    bool isSubsequence(string s, string t) {
        int idx = 0, cnt = 0;
        for (int i = 0; i < s.size(); i++) {
            bool found = false;
            for (int j = idx; j < t.size(); j++) {
                if (s[i] == t[j]) {
                    cnt++;
                    idx = j + 1;
                    found = true;
                    break;
                }
            }
            if (!found) return false;
        }
        return cnt == s.size();
    }
};