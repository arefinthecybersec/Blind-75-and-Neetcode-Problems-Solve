// Required Space = O(1)
// Approach: Voting Algo.

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0, winner = 0;

        for(int num: nums) {
            if(cnt == 0) winner = num;

            cnt += (num == winner) ? 1 : -1;
        }
        return winner;
    }
};