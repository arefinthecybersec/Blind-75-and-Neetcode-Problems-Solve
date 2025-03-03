class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int i, j;
        for(i = 0, j = 0; i < nums.size() && j < nums.size(); ) {
            if(nums[i] == nums[j]) {
                j++;
            }
            else {
                swap(nums[i+1], nums[j]);
                i++, j++;
            }
        }
        return i+1;
    }
};