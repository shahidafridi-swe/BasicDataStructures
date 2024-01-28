// https://www.codingninjas.com/studio/problems/count-leaf-nodes_893055


/**********************************************************

    Following is the Binary Tree Node class structure:

    template <typename T>
    class BinaryTreeNode {
      public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
        }
    };
    
***********************************************************/

int noOfLeafNodes(BinaryTreeNode<int> *root){
    // Write your code here.
    if (root == NULL)
        return 0;
    if (root->left == 0 && root->right == 0)
    {
        return 1;
    }
    else
    {
        int l = noOfLeafNodes(root->left);
        int r = noOfLeafNodes(root->right);
        return l + r;
    }
}