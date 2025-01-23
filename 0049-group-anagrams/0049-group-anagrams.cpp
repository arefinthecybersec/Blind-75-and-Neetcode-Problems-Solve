class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if (strs.size() == 0) {
            return {};
        }
        if (strs.size() == 1) {
            return {{strs[0]}};
        }

        vector<string> ans = strs;
        vector<pair<string, string>> result;

        for (int i = 0; i < strs.size(); i++) {
            sort(ans[i].begin(), ans[i].end());
            result.push_back({ans[i], strs[i]});
        }
        sort(result.begin(), result.end());

        vector<vector<string>> put;
        vector<string> group;

        for (int i = 0; i < result.size(); i++) {
            if (i > 0 && result[i].first != result[i - 1].first) {
                put.push_back(group);
                group.clear();
            }
            group.push_back(result[i].second);
        }
        if (!group.empty()) {
            put.push_back(group);
        }
        return put;
    }
};
