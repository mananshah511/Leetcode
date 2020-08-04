//https://leetcode.com/problems/increasing-order-search-tree/

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
void inorder(TreeNode* root,vector<TreeNode*> &v)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left,v);
    v.push_back(root);
    inorder(root->right,v);
}
class Solution {
public:
    TreeNode* increasingBST(TreeNode* root) {
        if(root==NULL)
        {
            return NULL;
        }
        vector<TreeNode*> v;
        inorder(root,v);
        TreeNode* ans;
        TreeNode* head;
        ans=v[0];
        head=ans;
        //cout<<v[0];
        for(int i=1;i<v.size();i++)
        {   
            ans->right=v[i];
            ans->left=NULL;
            ans=ans->right;
        }
        return head;
    }
};
