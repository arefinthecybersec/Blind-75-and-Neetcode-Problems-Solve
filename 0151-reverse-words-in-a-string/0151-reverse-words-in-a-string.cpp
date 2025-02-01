class Solution {
public:
    string reverseWords(string s) {
        string res, ans;
        for(int i = s.size()-1; i >= 0; i--) {
            if(islower(s[i]) || isupper(s[i]) || isdigit(s[i])) {
                res += s[i];
            }
            if((s[i] == ' ' && !res.empty()) || (i == 0 && !res.empty())) {
                for(int j = res.size()-1; j >= 0; j--) {
                    ans.push_back(res[j]);
                }
                ans.push_back(' ');
                res.clear();
            }
        }
        if(ans.back() == ' ') ans.pop_back();
        return ans;
    }
};