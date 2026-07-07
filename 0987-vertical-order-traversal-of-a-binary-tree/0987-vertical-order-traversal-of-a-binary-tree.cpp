class Solution {
public:

    vector<vector<int>> verticalTraversal(TreeNode* root) {

        map<int, map<int, multiset<int>>> mp;

        queue<tuple<TreeNode*, int, int>> q;

        q.push({root, 0, 0});

        while(!q.empty()) {

            auto [node, row, col] = q.front();
            q.pop();

            mp[col][row].insert(node->val);

            if(node->left) {
                q.push({node->left, row + 1, col - 1});
            }

            if(node->right) {
                q.push({node->right, row + 1, col + 1});
            }
        }

        vector<vector<int>> ans;

        for(auto &colPair : mp) {

            vector<int> temp;

            for(auto &rowPair : colPair.second) {

                for(auto val : rowPair.second) {
                    temp.push_back(val);
                }
            }

            ans.push_back(temp);
        }

        return ans;
    }
};