class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> mp;
        for(int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }
        
        for(auto u: mp) {
            if(u.second < 2) {
                return u.first;
            }
        }
        return {};
    }
};