class Solution {
public:
    bool isPalindrome(string s) {
        string t;
        for(int i = 0; i < s.size(); i++) {
            s[i] = tolower(s[i]);
        }

        int i = 0, j = s.size()-1;
        while(i < j) {
            while(i < j && !isalnum(s[i])) {
                i++;
            }
            while(i < j && !isalnum(s[j])) {
                j--;
            }

            if(s[i] != s[j]) return false;
            i++, j--;
        }
        return true;
    }
};