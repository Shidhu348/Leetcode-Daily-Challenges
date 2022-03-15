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
    
    pair<int, int> maxNode(TreeNode* root)
    {
        if(!root)
            return make_pair(0,0);
        pair<int, int> left = maxNode(root->left);
        pair<int, int> right = maxNode(root->right);
        int inner_path = max(left.second, right.second);
        if(left.first+right.first+1 > inner_path)
            inner_path = left.first+right.first+1;
        return make_pair(max(left.first,right.first)+1, inner_path);
    }
    
    
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root)
            return 0;
        pair<int, int> result = maxNode(root);
        
        return max(result.first, result.second)-1;
    }
};