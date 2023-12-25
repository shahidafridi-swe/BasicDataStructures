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
    Node *head = new Node(40);
    Node *a = new Node(50);
    head->next = a; // here 'a' is a pointer that's why dont use &a.

    cout << head->val << endl;
    cout << a->val << endl;
    cout << head->next->val << endl; // We always use this format
    cout << (*(*head).next).val << endl;
    return 0;
}