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

Node *convert_array_to_BST(int ar[], int n, int l, int r)
{
    if (l > r)
        return NULL;
    int mid = (l + r) / 2;
    Node *root = new Node(ar[mid]);
    Node *leftRoot = convert_array_to_BST(ar, n, l, mid - 1);
    Node *rightRoot = convert_array_to_BST(ar, n, mid + 1, r);
    root->left = leftRoot;
    root->right = rightRoot;
    return root;
}

int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    Node *root = convert_array_to_BST(ar, n, 0, n - 1);
    levelOrderPrint(root);

    return 0;
}