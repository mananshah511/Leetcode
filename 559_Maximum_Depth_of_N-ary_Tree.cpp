//https://leetcode.com/problems/maximum-depth-of-n-ary-tree/
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

int height(Node *root,int &ans)
{
    if(root==NULL)
    {
        return 0;
    }
    int res=0;
    for(int i=0;i<root->children.size();i++)
    {   
        int temp=height(root->children[i],ans);
        res=max(res,temp+1);
        ans=0;
    }
    return res;
}
class Solution {
public:
    int maxDepth(Node* root) {
        if(root==NULL)
        {
            return 0;
        }
        int ans=0;
        int res=0;
        res=max(height(root,ans),res);
        return res+1;
    }
};
