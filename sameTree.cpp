// 100. Same Tree

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


class Solution {
    public:
        void dfs(TreeNode* node, std::vector<int> &vec){
            if (node == nullptr){
                vec.push_back(INT_MIN);
                return;
            }
            vec.push_back(node->val);
            dfs(node->left, vec);
            
            dfs(node->right, vec);
        }
        bool isSameTree(TreeNode* p, TreeNode* q) {
            std::vector<int> pvals;
            std::vector<int> qvals;

            dfs(p, pvals);
            dfs(q, qvals);

            return (pvals == qvals);
        }
    };