class Solution {
public:
    bool isPalindrome(int x) {
        // string s = to_string(x);
        // if(s.size()%2 == 0){
        //     int p = (s.size() / 2)+1;
        //     int f = 0, pntr = 0;
        //     for(int i = s.size()-1; i >= p; i--) {
        //         if(s[i] == pntr[i]) {
        //             f = 0;
        //             pntr++;
        //         }
        //         else {
        //             f = 1; break;
        //         }
        //     }
        // }
        // else {
        //     int p = (s.size() / 2)+1;
        //     int f = 0, pntr = 0;
        //     for(int i = s.size()-1; i >= p; i--) {
        //         if(s[i] == pntr[i]) {
        //             f = 0;
        //             pntr++;
        //         }
        //         else {
        //             f = 1; break;
        //         }
        //     }
        // }

        // if(f) {
        //     return true;
        // }
        // else return false;


        string s = to_string(x), s1;
        s1 = s;
        reverse(s1.begin(), s1.end());

        if(s1 == s) {
            return true;
        }
        else return false;
    }
};