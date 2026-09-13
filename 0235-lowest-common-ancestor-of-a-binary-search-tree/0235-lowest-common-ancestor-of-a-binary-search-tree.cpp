/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if((p->val <root->val && q->val >root->val)||(p->val>root->val && q->val<root->val)){
            return root;
        }
        map<TreeNode*,TreeNode*>parent;
        queue<TreeNode*>a;
        a.push(root);
        parent[root]=root;
        while(!a.empty()){
                  TreeNode* node=a.front();
                  a.pop();
                  if(node->left){
                    parent[node->left]=node;
                    a.push(node->left);
                  }
                  if(node->right){
                    parent[node->right]=node;
                    a.push(node->right);
                  }
        }

        if(parent[p]==parent[q])
        return parent[p];
        // TreeNode* temp=p;
        // while(temp!=root){
        //     if(temp==q){
        //         return q;
        //     }
        //     temp=parent[temp];
        // }
        // temp=q;
        // while(temp!=root){
        //    if(temp==p){
        //         return p;
        //     } 
        //     temp=parent[temp];
        // }
        map<TreeNode*,bool>mpp;
        TreeNode* temp=p;
        while(temp!=root){
            mpp[temp]=true;
            temp=parent[temp];
        }
        temp=q;
        while(temp!=root){
            if(mpp.find(temp)!=mpp.end())
            return temp;
            temp=parent[temp];
        }
        return root;

    }
};