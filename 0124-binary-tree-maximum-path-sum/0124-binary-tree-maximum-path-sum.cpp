/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int maxSum = INT_MIN;

    int maxGain(TreeNode* node) {
        if (!node) return 0;

        int left = max(0, maxGain(node->left));    // ignore negative paths
        int right = max(0, maxGain(node->right));

        // Path passing through this node (can’t be split)
        int currentPath = node->val + left + right;

        // Update global max
        maxSum = max(maxSum, currentPath);

        // Return max sum from this node going up
        return node->val + max(left, right);
    }

    int maxPathSum(TreeNode* root) {
        maxGain(root);
        return maxSum;
    }
};

    
