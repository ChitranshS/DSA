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
int maxDepth(TreeNode* root) {
        if(root==NULL)
        return 0;
        return 1 + max(maxDepth(root->left),maxDepth(root->right));

    }
int main()
{
     TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(1);
    root->right = new TreeNode(6);
 


    // Invert the binary tree
    int solution = maxDepth(root);

    cout<<solution;
}