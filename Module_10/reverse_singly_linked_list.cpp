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

void print(Node * head)
{
    Node * temp = head;
    while(temp != NULL)
    {
        cout << temp->val << " ";
        temp =temp->next;
    }
    cout << endl;
}

void reverse_singly_linked_list(Node* &head, Node * cur)
{
    if(cur->next == NULL)
    {
        head = cur;
        return;
    }
    reverse_singly_linked_list(head, cur->next);
    cur->next->next = cur;
    cur->next = NULL;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);

    head->next = a;
    a->next = b;
    b->next = c;

    print(head);
    reverse_singly_linked_list(head, head);
    print(head);


    return 0;
}