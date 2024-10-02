class Solution {
public:
    bool check(vector<int>& nums) {
        if(is_sorted(nums.begin(), nums.end())) {
            return true;
        }
        int cnt = 0;
        for(int i = 0; i < nums.size()-1; i++) {
            if(nums[i] > nums[i+1]) {
                cnt++;
            }
        }

        if(cnt < 2 && nums.back() <= nums[0]) {
            return true;
        }
        else return false; 
    }
};