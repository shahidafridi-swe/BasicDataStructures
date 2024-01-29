// https://leetcode.com/problems/univalued-binary-tree/

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
    bool isUnivalTree(TreeNode* root) {
        queue<TreeNode *> q;
        int t;
        if(root)
            {
                q.push(root);
                t = root->val;
            }

        while (!q.empty())
        {
            // 1. line the ber kore ana
            TreeNode *f = q.front();
            q.pop();

            // 2. jabotiyo sokol kaj kore
            if( t != f->val) return false;

            // 3.children gula k line e deya
            if (f->left)
                q.push(f->left);
            if (f->right)
                q.push(f->right);
        }
        return true;
    }
};