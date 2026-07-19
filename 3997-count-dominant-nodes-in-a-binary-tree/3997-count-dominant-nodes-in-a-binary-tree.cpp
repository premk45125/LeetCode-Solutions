class Solution {
public:
    int ans = 0;

    int dfs(TreeNode* root) {
        if (!root)
            return INT_MIN;

        int leftMax = dfs(root->left);
        int rightMax = dfs(root->right);

        int currMax = max(root->val, max(leftMax, rightMax));

        if (root->val == currMax)
            ans++;

        return currMax;
    }

    int countDominantNodes(TreeNode* root) {

        dfs(root);
        return ans;
    }
};