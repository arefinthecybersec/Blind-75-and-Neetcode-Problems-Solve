#define pb push_back
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> v;
        for(auto u: strs) {
            v.pb(u);
        }
        vector<pair<string, string>> vp;
        for(auto u: v) {
            string s = u;
            sort(s.begin(), s.end());
            vp.pb({s, u});
        }
        sort(vp.begin(), vp.end());

        vector<vector<string>> result;
        vector<string> res;
        int pos = 0;
        res.pb(vp[0].second);
        for(int i = 0; i < vp.size()-1; i++) {
            if(vp[i].first == vp[i+1].first) {
                // pos = i+1;
                res.pb(vp[i+1].second);
            }
            else {
                result.pb(res);
                res.clear();
                res.pb(vp[i+1].second);
            }
        }
        result.pb(res);
        
        return result;
    }
};