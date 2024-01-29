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
void levelOrderPrint(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        // 1. line the ber kore ana
        Node *f = q.front();
        q.pop();

        // 2. jabotiyo sokol kaj kore
        cout << f->val << " ";

        // 3.children gula k line e deya
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    cout << endl;
}

void insert_in_bst(Node *&root, int x)
{
    if (root == NULL)
        root = new Node(x);
    if (x < root->val)
    {
        if (root->left == NULL)
            root->left = new Node(x);
        else
            insert_in_bst(root->left, x);
    }
    else if (root->val < x)
    {
        if (root->right == NULL)
            root->right = new Node(x);
        else
            insert_in_bst(root->right, x);
    }
}
int main()
{
    Node *root = input_tree();
    insert_in_bst(root, 16);
    levelOrderPrint(root);
    return 0;
}