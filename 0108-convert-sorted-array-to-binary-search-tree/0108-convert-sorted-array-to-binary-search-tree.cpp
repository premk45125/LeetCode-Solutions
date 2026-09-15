class Solution {
public:
    TreeNode* find(vector<int>& nums, int i, int j) {

        if(i > j)
            return NULL;

        int mid = i + (j - i) / 2;

        TreeNode* root = new TreeNode(nums[mid]);

        root->left = find(nums, i, mid - 1);
        root->right = find(nums, mid + 1, j);

        return root;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {

        return find(nums, 0, nums.size() - 1);
    }
};