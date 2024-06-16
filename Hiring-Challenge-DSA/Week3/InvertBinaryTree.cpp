#include<bits/stdc++.h>
using namespace std;
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

   void traverse(TreeNode* &node)
    {
        if (node==NULL)
        return;
        TreeNode* temp = node;
        temp = node->left;
        node->left = node->right;
        node->right = temp;
        traverse(node->left);
        traverse(node->right);
    }
    
    TreeNode* invertTree(TreeNode* root) {
         
        TreeNode * node = root;
        traverse(node);
        return root;


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
    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(7);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(9);

    // Print original tree in-order
    cout << "Original tree in-order: ";
    printInOrder(root);
    cout << endl;

    // Invert the binary tree
    root = invertTree(root);

    // Print inverted tree in-order
    cout << "Inverted tree in-order: ";
    printInOrder(root);
    cout << endl;

    return 0;
}