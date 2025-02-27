class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> triplets;

        for(int i = 0; i < nums.size(); i++) {
            // Skip duplicate values for i
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            int L = i + 1, R = nums.size() - 1;

            while(L < R) {
                int sum = nums[i] + nums[L] + nums[R];

                if(sum > 0) {
                    R--;
                } else if(sum < 0) {
                    L++;
                } else {
                    // Found a triplet
                    triplets.push_back({nums[i], nums[L], nums[R]});
                    // Skip duplicates for L and R
                    while(L < R && nums[L] == nums[L + 1]) L++;
                    while(L < R && nums[R] == nums[R - 1]) R--;
                    L++;
                    R--;
                }
            }
        }
        return triplets;
    }
};
