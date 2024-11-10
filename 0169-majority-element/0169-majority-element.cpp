//Expected Time Complexity = o(n)
//Expected Memory Complexity = o(1)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> map_list;
        for(int i = 0; i < nums.size(); i++) map_list[nums[i]]++;

        int n = nums.size()/2;
        for(auto u: map_list) {
            if(u.second > n) return u.first;
        }
        return {};
    }
};