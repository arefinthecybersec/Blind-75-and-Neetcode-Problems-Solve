class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> map_list;
        for(int i = 0; i < nums.size(); i++) map_list[nums[i]]++;

        int mx = INT_MIN, res = 0;
        for(auto u: map_list) {
            if(u.second > mx) {
                res = u.first;
                mx = u.second;
            }
        }
        return res;
    }
};