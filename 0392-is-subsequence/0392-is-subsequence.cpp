class Solution {
public:
    bool isSubsequence(string s, string t) {
        int f = 0, f2 = 0, i = 0, j = 0, ck = 0;

        if(s.size() == 0) {
            return true;
        }

        for(; i < s.size(); ) {
            for(; j < t.size(); ) {
                if(s[i] == t[j]) {
                    ck++;
                    j++; i++; break;

                    if(ck == s.size()) {
                        f2 = 1; break;
                    }
                    if(i == s.size() || j == t.size()) {
                        f = 1; break;
                    }
                }
                else {
                    j++;
                }
            }

            if(ck == s.size()) {
                f2 = 1; break;
            }
            if(i == s.size() || j == t.size()) {
                f = 1; break;
            }
        }

        if(f2 == 1) {
            return true;
        }
        else if(f == 1) {
            return false;
        }
        else return false;
    }
};