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
// Step 1: Build parent map and find target node
void mapParents(TreeNode* root, unordered_map<TreeNode*, TreeNode*>& parent, TreeNode*& target, int t) {
    queue<TreeNode*> q;
    q.push(root);
    while (!q.empty()) {
        TreeNode* cur = q.front(); q.pop();
        if (cur->val == t) target = cur;
        if (cur->left) {
            parent[cur->left] = cur;
            q.push(cur->left);
        }
        if (cur->right) {
            parent[cur->right] = cur;
            q.push(cur->right);
        }
    }
}

// Step 2: BFS to simulate burning
int amountOfTime(TreeNode* root, int targetVal) {
    unordered_map<TreeNode*, TreeNode*> parent;
    TreeNode* target = nullptr;

    mapParents(root, parent, target, targetVal);

    unordered_map<TreeNode*, bool> visited;
    queue<TreeNode*> q;
    q.push(target);
    visited[target] = true;

    int time = 0;
    while (!q.empty()) {
        int size = q.size();
        bool anySpread = false;
        for (int i = 0; i < size; i++) {
            TreeNode* node = q.front(); q.pop();
            for (TreeNode* adj : {node->left, node->right, parent[node]}) {
                if (adj && !visited[adj]) {
                    q.push(adj);
                    visited[adj] = true;
                    anySpread = true;
                }
            }
        }
        if (anySpread) time++;
    }
    return time;
}

    
};