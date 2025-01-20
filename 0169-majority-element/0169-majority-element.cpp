class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0;
        int winner = 0;

        for(int i = 0; i < nums.size(); i++) {
            if(cnt == 0) {
                winner = nums[i];
            }
            
            if(nums[i] == winner) {
                cnt++;
            }
            else cnt--;
        }
        return winner;
    }
};