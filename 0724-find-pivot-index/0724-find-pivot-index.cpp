//T.C = O(n)
// S.C = O(n)
//Appr -> prefix sum

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int> leftArray(n, 0);
        vector<int> rightArray(n, 0);

        // leftArray[0] = nums[0];
        for(int i = 1; i < n; i++) {
            leftArray[i] = nums[i-1] + leftArray[i-1];
        }

        rightArray[n-1] = 0;
        for(int i = n-2; i >= 0; i--) {
            rightArray[i] = nums[i+1] + rightArray[i+1];
        }

        for(int i = 0; i < n; i++) {
            if(leftArray[i] == rightArray[i]) {
                return i;
            }
        }
        return -1;
    }
};