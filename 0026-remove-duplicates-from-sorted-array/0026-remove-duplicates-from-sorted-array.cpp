class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int arr[n+1];
        int sz = unique(nums.begin(), nums.end()) - nums.begin();
        for(int i = 0; i < sz; i++) {
            arr[i] = nums[i];
        }
        return sz;
    }
};