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


TreeNode*  LCA(TreeNode* root , TreeNode*  a , TreeNode* b) {
    if(root==NULL || root == a || root ==b)
    return root;

    TreeNode* left = LCA(root->left,a,b);
    TreeNode* right = LCA(root->right,a,b);

    if(right==NULL)
    return left;

    if (left==NULL)
    return right;

    else
    return root;



    }
int main()
{   TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(1);
    root->right = new TreeNode(6);
    root->left->left = new TreeNode(3);
    // root->left->right = new TreeNode(4);
    // root->right->left = new TreeNode(3);
    // root->right->right = new TreeNode(8);


    // Invert the binary tree
    TreeNode*  solution = LCA(root , root->left->left , root->right);

    cout<<solution->val;
}