class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        nth_element(nums.begin(), nums.begin() + k - 1, nums.end(), greater<int>());
        return nums[k - 1];
    }
};




//Expected Time Complexity: o(n)
//Expected Memory Complexity: o(1)
//Hints: Yes (didn't solve)


// mt19937 rng(0);

// class Solution {
// public:
//     int partition(vector<int> &nums, int L, int R) {
//         int pvt = nums[R];
//         int i = L - 1;

//         for(int j = L; j < R; j++) {
//             if(nums[j] <= pvt) {
//                 i++;
//                 swap(nums[i], nums[j]);
//             }
//         }

//         swap(nums[i + 1], nums[R]);
//         return i+1;
//     }

//     void partial_sort(vector<int> &nums, int k) {
//         shuffle(nums.begin(), nums.end(), rng);
//         int L = 0, R = nums.size() - 1;
//         int threshold = 2 * log2(nums.size());

//         while(L < R && threshold--) {
//             int p = partition(nums, L, R);
//             if(p < k) L = p+1;
//             else if(p > k) R = p-1;
//             else break;
//         }
//     }

//     int findKthSmallest(vector<int>& nums, int k) {
//         partial_sort(nums, k);
//         return nums[k];
//     }

//     int findKthLargest(vector<int> &nums, int k) {
//         return findKthSmallest(nums, nums.size() - k);
//     }
// };