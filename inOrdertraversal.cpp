// 94. Binary Tree Inorder Traversal
#include <vector>
#include <string>
#include <math.h>
#include <iostream>


 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

 
void inOrderAdd(TreeNode* root, std::vector<int> & list){
    if (root == nullptr) return;
    inOrderAdd(root->left, list);
    list.push_back(root->val);
    inOrderAdd(root->right, list);
}


std::vector<int> inorderTraversal(TreeNode* root) {
    std::vector<int> res;
    inOrderAdd(root, res);
    return res;
}


