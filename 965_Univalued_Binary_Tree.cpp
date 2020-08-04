//https://leetcode.com/problems/univalued-binary-tree/
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
bool check(TreeNode* root,int val)
{
    if(root==NULL)
    {
        return true;
    }
    if(root->val!=val)
    {
        return false;
    }
    return (check(root->left,val) && check(root->right,val));
}
class Solution {
public:
    bool isUnivalTree(TreeNode* root) {
        if(root==NULL)
        {
            return true;
        }
        int val=root->val;
        return check(root,val);
    }
};
