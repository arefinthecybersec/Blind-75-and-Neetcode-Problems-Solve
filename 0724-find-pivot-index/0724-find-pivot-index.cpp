class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int> leftArray(n, 0);
        vector<int> rightArray(n, 0);
        int leftSum = 0;
        int rightSum = 0;

        for(int i = 0; i < n; i++) {
            leftArray[i] = leftSum;
            leftSum += nums[i];

            rightArray[n-i-1] = rightSum;
            rightSum += nums[n-i-1];
        }

        for(int i = 0; i < n; i++) {
            if(leftArray[i] == rightArray[i]) {
                return i;
            }
        }
        return -1;
    }
};