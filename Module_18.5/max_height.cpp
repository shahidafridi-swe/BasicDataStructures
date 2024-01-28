// https://www.codingninjas.com/studio/problems/tree-height_4609628

/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode
    {
    public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val)
        {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
int maximum_height(TreeNode<int> *root)
{
    if (root == NULL)
        return 0;
    int l = maximum_height(root->left);
    int r = maximum_height(root->right);
    return max(l, r) + 1;
}
int heightOfBinaryTree(TreeNode<int> *root)
{
	return maximum_height(root);
}
