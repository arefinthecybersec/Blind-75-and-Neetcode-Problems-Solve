
class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root == nullptr) return 0;

        int l_sum, r_sum;
        int sum = 0;
        // if(root -> val >= low && root -> val <= high) {
        //     l_sum += rangeSumBST(root -> left);
        //     r_sum += rangeSumBST(root -> right);
        // }

        if(root -> val >= low && root -> val <= high) sum += root -> val;

        sum += rangeSumBST(root -> left, low, high);
        sum += rangeSumBST(root -> right, low, high);

        return sum;

    }
};