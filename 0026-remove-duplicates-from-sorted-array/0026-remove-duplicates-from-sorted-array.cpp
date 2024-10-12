class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int sz = unique(nums.begin(), nums.end()) - nums.begin();
        vector<int> v;
        for(int i = 0; i < sz; i++) {
            v.push_back(nums[i]);
        }
        return v.size();
    }
};