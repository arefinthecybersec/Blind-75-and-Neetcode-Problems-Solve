
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == nullptr) return 0;

        int l_max = maxDepth(root -> left);
        int r_max = maxDepth(root -> right);

        return max(l_max, r_max)+1;
    }
};