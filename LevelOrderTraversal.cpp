// 102. Binary Tree Level Order Traversal


#include <vector>
#include <string>
#include <math.h>
#include <iostream>
#include <climits>


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

void levelOrderRec(TreeNode* root, int level, std::vector<std::vector<int>>& res){
    if (root == nullptr) return;

    if (res.size() <= level){
        res.push_back({});
    }

    res.at(level).push_back(root->val);

    levelOrderRec(root->left, level+1, res);
    levelOrderRec(root->right, level +1, res);
}

std::vector<std::vector<int>> levelOrder(TreeNode* root) {
    std::vector<std::vector<int>> vec;
    levelOrderRec(root, 0, vec);
    return vec;
}