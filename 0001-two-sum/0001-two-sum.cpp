//Expected T.C = O(n) - for array
//Expected S.C = O(n) - for map

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        for(int i = 0; i < nums.size(); i++) {
            if(map.find(nums[i]) == map.end()) {
                map[nums[i]] = i;
            }
        }

        for(int i = 0; i < nums.size(); i++) {
            int ans = target - nums[i];
            // map.erase(nums[i]);
            if(map.find(ans) != map.end() && i != map[ans]) {
                return {i, map[ans]};
            }
            // map[nums[i]] = i;
        }

        return {-1};
    }
};