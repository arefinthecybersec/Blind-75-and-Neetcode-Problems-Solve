class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> my_map;
        for(auto u: nums) {
            my_map[u]++;
        }

        for(auto u: my_map) {
            if(u.second == 1) {
                return u.first;
            }
        }
        return {};
    }
};