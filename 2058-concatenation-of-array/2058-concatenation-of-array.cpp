class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> v = nums;
        
        nums.insert(nums.end(), v.begin(), v.end());
        return nums;
    }
};