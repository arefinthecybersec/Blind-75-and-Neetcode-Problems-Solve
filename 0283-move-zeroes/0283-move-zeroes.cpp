// didn't sort & didn't coppy
// 

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int sz = nums.size();
        // int cntZero = count(nums.begin(), nums.end(), 0);
        if(sz == 1) cout << nums[0];

        int i = 0, j = 0;
        while(j < nums.size() && sz > 1) {
            if(nums[i] != 0) {
                i++, j++;
            }
            else if(nums[j] == 0) {
                j++;
            }
            else {
                swap(nums[i], nums[j]);
                i++;
            }
        }
        for(int num: nums) cout << num << " ";
    }
};