class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int> leftArray;
        vector<int> rightArray;

        leftArray.push_back(0);
        rightArray.push_back(0);

        for(int i = 0; i < n; i++) {
            if(i != n-1) {
                leftArray.push_back(nums[i] + leftArray.back());
            }

            if(i != 0) {
                rightArray.push_back(nums[n-i] + rightArray.back());
            }
        }
        reverse(rightArray.begin(), rightArray.end());

        for(int i = 0; i < n; i++) {
            if(leftArray[i] == rightArray[i]) {
                return i;
            }
        }
        return -1;
    }
};