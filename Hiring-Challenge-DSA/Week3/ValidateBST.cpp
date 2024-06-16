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

  bool fn(TreeNode* root,long long minVal , long long maxVal) {
    if (root==NULL)
    return true;
    if(!(minVal< root->val && root->val < maxVal))
    {
        return false;
    }

    return fn(root->left,minVal,root->val) && fn(root->right,root->val,maxVal);
  }
    
    bool isValidBST(TreeNode* root) {
   return fn(root,LONG_MIN,LONG_MAX);
    }
    // Function to print the binary tree in in-order traversal
void printInOrder(TreeNode* node) {
    if (node == NULL)
        return;
    printInOrder(node->left);
    cout << node->val << " ";
    printInOrder(node->right);
}

int main() {
    // Create a sample binary tree
    TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(1);
    root->right = new TreeNode(6);
    root->left->left = new TreeNode();
    root->left->right = new TreeNode();
    root->right->left = new TreeNode(3);
    root->right->right = new TreeNode(6);

    // Print original tree in-order
    cout << "Original tree in-order: ";
    printInOrder(root);
    cout << endl;

    // Invert the binary tree
    bool solution = isValidBST(root);

    cout<<solution;

    return 0;
}