#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    // cout << head->val << endl;
    // cout << head->next->val << endl;
    // cout << head->next->next->val << endl;
    // cout << head->next->next->next->val << endl;
    // cout << head->next->next->next->next->val << endl;
    Node *tmp_head = head;
    while (tmp_head != NULL)
    {
        cout << tmp_head->val << endl;
        tmp_head = tmp_head->next;
    }
    tmp_head = head;
    while (tmp_head != NULL)
    {
        cout << tmp_head->val << " ";
        tmp_head = tmp_head->next;
    }
    return 0;
}