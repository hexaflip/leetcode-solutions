#include <iostream>
#include <math.h>
#include <algorithm>
#include <unordered_map>
#include <queue>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

using namespace std;

class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if (root == nullptr) return true;
        TreeNode* ILS = InvertLeft(root->left);
        return isSameTree(ILS, root->right);

    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
            if (p == nullptr && q == nullptr){
                return true;
            }
            if (p == nullptr || q == nullptr){
                return false;
            }
            if (p->val == q->val){
                return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
            }
            return false;
        }

    TreeNode* InvertLeft(TreeNode* leftNode){
        if (leftNode == nullptr) return;

        InvertLeft(leftNode->left);
        InvertLeft(leftNode->right);
        
        TreeNode* temp = leftNode->left;
        leftNode->left = leftNode->right;
        leftNode->right = temp;

        return leftNode;
    }
};
