#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    string val;
    Node *next;
    Node *prev;
    Node(string val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, string val)
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
string find_string(Node *head, string val, Node *&current)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->val == val)
        {
            current = temp;
            return val;
        }
        temp = temp->next;
    }
    return "Not Available";
}

string find_next(Node *&current)
{
    if (current->next != NULL)
    {
        current = current->next;
        return current->val;
    }
    return "Not Available";
}

string find_prev(Node *&current)
{
    if (current->prev != NULL)
    {
        current = current->prev;
        return current->val;
    }
    return "Not Available";
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
    Node *current = head;
    string val;
    while (true)
    {
        cin >> val;
        if (val == "end")
            break;
        insert_at_tail(head, tail, val);
    }
    int q;
    cin >> q;
    while (q--)
    {
        string query;
        cin >> query;
        if (query == "visit")
        {
            string val;
            cin >> val;
            cout << find_string(head, val, current) << endl;
        }
        else if (query == "next")
        {
            cout << find_next(current) << endl;
        }
        else if (query == "prev")
        {
            cout << find_prev(current) << endl;
        }
    }

    return 0;
}