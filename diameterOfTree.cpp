// 543. Diameter of Binary Tree
#include <string>
#include <unordered_map>
#include <iostream>
#include <vector>
#include <map>
#include <set>


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

int diameterOfBinaryTree(TreeNode* root) {

}