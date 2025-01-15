class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]] = i;
        }

        for (int i = 0; i < nums.size(); i++) {
            int f1 = nums[i];
            int f2 = target - f1;

            if(mp.find(f2) != mp.end() && mp[f2] != i) {
                return {i, mp[f2]};
            }
        }

        return {};
    }
};
