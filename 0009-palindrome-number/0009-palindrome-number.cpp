class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x), s1;
        s1 = s;
        reverse(s1.begin(), s1.end());

        if(s1 == s) {
            return true;
        }
        else return false;
    }
};