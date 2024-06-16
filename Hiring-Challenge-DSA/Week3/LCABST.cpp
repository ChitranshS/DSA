#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(-1), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
       while (root)
    {
        if (root->val > p->val && root->val > q->val)
            root = root->left;
        else if (root->val < q->val && root->val < p->val)
            root = root->right;
        else
            return root;
    }
    return NULL;
         
    }
int main()
{    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(1);
    root->right = new TreeNode(6);
    root->left->left = new TreeNode();
    root->left->right = new TreeNode(2);
    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(7);


    // Invert the binary tree
    TreeNode*  solution = lowestCommonAncestor(root , root->right->left , root->left->right);

    cout<<solution->val;
}