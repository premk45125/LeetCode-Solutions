class Solution {
public:
    int idx = 0;

    TreeNode* build(vector<int>& preorder, int bound = INT_MAX) {
        if (idx == preorder.size() || preorder[idx] > bound) 
            return nullptr;

        TreeNode* root = new TreeNode(preorder[idx++]);
        root->left = build(preorder, root->val);   // left subtree must be < root->val
        root->right = build(preorder, bound);      // right subtree must be < bound
        return root;
    }

    TreeNode* bstFromPreorder(vector<int>& preorder) {
        return build(preorder);
    }
};
