class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> my_map;

        for(int i = 0; i < nums.size(); i++) {
            int ck = (target - nums[i]);

            if(my_map.find(ck) != my_map.end()) {
                return {
                    my_map[ck], i
                };
            }
            my_map[nums[i]] = i;
        }
        return {};
    }
};
