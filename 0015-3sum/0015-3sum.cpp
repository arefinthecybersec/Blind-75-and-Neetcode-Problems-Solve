// Required T.C = O(n^2)
// approach -> Two-Pointer

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> triplets;
        
        for(int i = 0; i < nums.size(); i++) {
            // while(i+1 < nums.size() && nums[i] == nums[i+1]) i++; //1st ccomment

            int L = i+1, R = nums.size()-1;
            int a = nums[i], ans = -a;
            while(i+1 < nums.size()-1 && nums[i] == nums[i+1]) i++;
            // while(i+1 < nums.size() && nums[i+1] == a) i++; //2nd comment
            while(L < R) {

                if(nums[L] + nums[R] > ans) {
                    R--;
                }
                else if(nums[L] + nums[R] < ans) {
                    L++;
                }
                else {
                    int b = nums[L];
                    int c = nums[R];

                    while(L < R-1 && nums[R] == nums[R-1]) R--;
                    while(L+1 < R && nums[L] == nums[L+1]) L++;

                    triplets.push_back({a, b, c});
                    L++, R--;
                }
            }
        }
        return triplets;
    }
};