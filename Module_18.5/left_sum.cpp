// https://www.codingninjas.com/studio/problems/left-sum_920380

#include <bits/stdc++.h> 
/*
	Tree Node class.

	class BinaryTreeNode 
	{
		T data;
		BinaryTreeNode<T> *left;
		BinaryTreeNode<T> *right;

		BinaryTreeNode(T data) {
			this->data = data;
			left = NULL;
			right = NULL;
		}
	}
*/


long long leftSum(BinaryTreeNode<int> *root)
{
	long long sum = 0;
	queue<BinaryTreeNode<int> *> q;
    q.push(root);
    while (!q.empty())
    {
        // 1. line the ber kore ana
        BinaryTreeNode<int> *f = q.front();
        q.pop();

        // 2. jabotiyo sokol kaj kore
        // cout << f->val << " ";
		if(f->left)
			sum += f->left->data;

        // 3.children gula k line e deya
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
	return sum;
}