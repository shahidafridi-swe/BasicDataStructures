// https://www.codingninjas.com/studio/problems/level-order-traversal_796002



#include <bits/stdc++.h> 
/************************************************************

    Following is the BinaryTreeNode class structure

    template <typename T>
    class BinaryTreeNode {
       public:
        T val;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    vector<int>v;
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    while (!q.empty())
    {
        // 1. line the ber kore ana
        BinaryTreeNode<int> *f = q.front();
        q.pop();

        // 2. jabotiyo sokol kaj kore
        v.push_back(f->val);
        // 3.children gula k line e deya
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    return v;
}