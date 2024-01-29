#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        // 1. ber kore ano
        Node *p = q.front();
        q.pop();

        // 2. jabotiyo kaj koro
        int l, r;
        cin >> l >> r;
        Node *left, *right;
        if (l == -1)
            left = NULL;
        else
            left = new Node(l);
        if (r == -1)
            right = NULL;
        else
            right = new Node(r);

        p->left = left;
        p->right = right;

        // 3. children push koro
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

int maximum_depth(Node *root)
{
    if (root == NULL)
        return 0;
    int l = maximum_depth(root->left);
    int r = maximum_depth(root->right);
    return max(l, r) + 1;
}
int count_node(Node *root)
{
    if (root == NULL)
        return 0;
    int l = count_node(root->left);
    int r = count_node(root->right);
    return l + r + 1;
}
int main()
{
    Node *root = input_tree();
    int nodes = count_node(root);
    int d = maximum_depth(root);
    bool perfect = nodes == (pow(2, d) - 1);
    perfect ? cout << "YES" : cout << "NO";
    return 0;
}