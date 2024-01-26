#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

bool is_palindorme_doubly_linked_list(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;

    while (i != j && i->next != j)
    {
        if(i->val != j->val)
            return false;
        
        i = i->next;
        j = j->prev;
    }
    if(i->val != j->val)
            return false;
    return true;
}

void print_normal(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, tail, val);
    }
   (is_palindorme_doubly_linked_list(head,tail)) ? cout << "YES" : cout << "NO";

    return 0;
}