class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int cnt = count(nums.begin(), nums.end(), 0);
        for(int i = nums.size()-1; i >= 0; i--) {
            if(nums[i] == 0) {
                nums.erase(nums.begin()+i);
            }
        }

        for(int i = 0; i < cnt; i++) {
            nums.push_back(0);
        }

        for(int i = 0; i < nums.size(); i++) {
            cout << nums[i];
        }
    }
};