/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int n=preorder.size();
        // vector<int>inorder=preorder;
        // sort(inorder.begin(),inorder.end());
        TreeNode* root=new TreeNode(preorder[0]);
        TreeNode* current=root;
        stack<TreeNode*>st;
        st.push(current);
        for(int i=1;i<n;i++){
            TreeNode* node=new TreeNode(preorder[i]);
            if(node->val < st.top()->val){
                current->left=node;
                current=node;
            }
            else{
                TreeNode* temp=st.top();
                while(!st.empty() && st.top()->val < node->val ){
                    temp=st.top();
                    st.pop(); 
                }
                temp->right=node;
                current=node;
            }
                st.push(node);

        }
        

        return root;
    }
};