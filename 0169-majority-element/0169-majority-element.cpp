//Expected Time Complexity = o(n)
//Expected Memory Complexity = o(1)
//Approach: Moore Voting Algorithm

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0;
        int res = 0;

        for(auto u: nums) {
            if(cnt == 0) {
                res = u;
            }

            if(u == res) cnt++;
            else cnt--;
        }
        return res;
    }
};