class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> ans;
        ans = strs;
        vector<pair<string, string>> result;

        for(int i = 0; i < strs.size(); i++) {
            sort(ans[i].begin(), ans[i].end());
            result.push_back({ans[i], strs[i]});
        }

        sort(result.begin(), result.end());
        strs.clear();
        vector<vector<string>> put;
        vector<string> print;

       
        for(int i = result.size() - 1; i >= 0; i--) {
            if (i > 0 && result[i].first == result[i - 1].first) {
                print.push_back(result[i].second);
            }
            else {
                print.push_back(result[i].second);
                put.push_back(print);
                print.clear();
            }
        }

        if (result.size() > 0 && result[0].first == result[1].first) {
            print.push_back(result[0].second);
            put.push_back(print);
        }
        else if (result.size() > 0) {
            put.push_back(print);
        }

        return put;
    }
};
