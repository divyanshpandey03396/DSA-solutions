class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (!root) return root;
        TreeNode* l=invertTree(root->right);
        TreeNode* r=invertTree(root->left);
        root->left=l;
        root->right=r;
        return root;
    }
};