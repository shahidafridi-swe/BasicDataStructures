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

bool same_to_same(Node *head_1, Node *head_2)
{
    Node *temp_1 = head_1;
    Node *temp_2 = head_2;
    int size_1 = 0, size_2 = 0;
    while (temp_1 != NULL)
    {
        size_1++;
        temp_1 = temp_1->next;
    }
    while (temp_2 != NULL)
    {
        size_2++;
        temp_2 = temp_2->next;
    }
    if (size_1 != size_2)
        return false;
    temp_1 = head_1;
    temp_2 = head_2;
    for (int i = 0; i < size_1; i++)
    {

        if (temp_1->val != temp_2->val)
            return false;
        temp_1 = temp_1->next;
        temp_2 = temp_2->next;
        
    }
    return true;
}

int main()
{
    Node *head_1 = NULL;
    Node *tail_1 = NULL;

    Node *head_2 = NULL;
    Node *tail_2 = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head_1, tail_1, val);
    }
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head_2, tail_2, val);
    }
    (same_to_same(head_1, head_2)) ? cout << "YES" : cout << "NO";
    return 0;
}