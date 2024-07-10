class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if (nums.size() == 1) {
            return nums;
        }

        sort(nums.begin(), nums.end());

        int cnt = 1, i;
        vector<pair<int, int>> v;
        for (i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
                cnt++;
            }
            else {
                v.push_back({cnt, nums[i-1]});
                cnt = 1;
            }
        }
        v.push_back({cnt,nums.back()});
        sort(v.begin(), v.end());

        vector<int> ans;
        for (i = v.size()-1; i >= 0 && k; i--) {
            ans.push_back(v[i].second);
            k--;
        }
        return ans;
    }
};