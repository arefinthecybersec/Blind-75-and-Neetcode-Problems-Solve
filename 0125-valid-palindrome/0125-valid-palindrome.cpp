class Solution {
public:
    bool isPalindrome(string s) {
        string t;
        for(int i = 0; i < s.size(); i++) {
            if(isupper(s[i])) {
                s[i] = tolower(s[i]);
            }
            if(isupper(s[i]) || islower(s[i]) || isdigit(s[i])) {
                t.push_back(s[i]);
            }
        }

        string tmp = t;
        reverse(t.begin(), t.end());
        if(tmp == t) {
            return true;
        }
        else return false;
    }
};