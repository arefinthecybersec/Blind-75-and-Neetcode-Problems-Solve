class Solution {
public:
    bool isPalindrome(string s) {
        string s1;
        for(int i = 0; i < s.size(); i++) {
            if(islower(s[i]) || isdigit(s[i])) {
                s1.push_back(s[i]);
            }
            if(isupper(s[i])) {
                s1.push_back(s[i] - 'A' + 'a');
            }
        }
        // for(int i = 0; i < s1.size(); i++) {
        //     if(isupper(s1[i])) {
        //         s1[i] = s1[i] - 'A' + 'a';
        //     }
        // }
        
        string s2 = s1;
        reverse(s2.begin(), s2.end());

        if(s1 == s2 || s1.size() == 1 || s.size() == 0) {
            return true;
        }
        return false;
    }
};