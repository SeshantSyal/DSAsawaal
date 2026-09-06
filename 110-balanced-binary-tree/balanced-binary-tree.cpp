class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL)
        {
            return 0;
        }
        int ln = maxDepth(root->left);
        int rn = maxDepth(root->right);
        return 1 + max(ln, rn);
    }
    bool isBalanced(TreeNode* root) {
        if(root == NULL)
        {
            return true;
        }
        int ln = maxDepth(root->left);
        int rn = maxDepth(root->right);
        if(abs(ln - rn) <= 1)
        {
            return isBalanced(root->left) && isBalanced(root->right);
        }
        else
        {
            return false;
        }
    }
};