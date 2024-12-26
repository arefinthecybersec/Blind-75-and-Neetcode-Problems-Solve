class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        ans = nums;
        ans.insert(ans.end(), nums.begin(), nums.end());
        return ans;
    }
};