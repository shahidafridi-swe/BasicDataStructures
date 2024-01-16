#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    long long int val;
    Node *next;
    Node(long long int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(Node *&head, Node *&tail,long long int val)
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
long long int find_index(Node *head, long long int x)
{
    Node *temp = head;
    long long int index = 0;
    while (temp != NULL)
    {
        if (temp->val == x)
        {
            return index;
        }
        temp = temp->next;
        index++;
    }
    return -1;
}


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Node *head = NULL;
        Node *tail = NULL;
        long long int val;
        while (true)
        {
            cin >> val;
            if (val == -1)
                break;
            insert_at_tail(head, tail, val);
        }
        long long int x;
        cin >> x;
        cout << find_index(head, x) << endl;
    }

    return 0;
}