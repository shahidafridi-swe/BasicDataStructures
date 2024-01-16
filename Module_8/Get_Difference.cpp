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
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
int get_difference(Node *head)
{
    Node *temp = head;
    int max = temp->val;
    int min = temp->val;
    int dif;
    while (temp != NULL)
    {
        if (min >= temp->val)
            min = temp->val;
        else if (max <= temp->val)
            max = temp->val;
        temp = temp->next;
    }
    dif = max - min;
    return dif;
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
    int dif;
    dif = get_difference(head);
    cout << dif;
    return 0;
}