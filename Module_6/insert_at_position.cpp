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

void insert_at_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        cout << endl
             << "Inserted " << val << " at head" << endl
             << endl;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    // temp akhon last node e
    temp->next = newNode;
    cout << endl
         << "Inserted " << val << " at tail" << endl
         << endl;
}

void insert_at_position(Node *head, int position, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 1; i <= position - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    cout << endl
         << endl
         << "Inserted " << val << " at position no: " << position << endl
         << endl;
}

void print_linked_list(Node *head)
{
    cout << "Your Linked list is: ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl
         << endl;
}

int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Type 1 : For Insert at Tail" << endl;
        cout << "Type 2 : For Print Linked List" << endl;
        cout << "Type 3 : For Insert at any Position" << endl;
        cout << "Type 4 : For Terminate" << endl;
        int option;
        cin >> option;

        if (option == 1)
        {
            int val;
            cout << "Please insert your value: ";
            cin >> val;
            insert_at_tail(head, val);
        }
        else if (option == 2)
        {
            print_linked_list(head);
        }
        else if (option == 3)
        {
            int position, val;
            cout << "Enter the position: ";
            cin >> position;
            cout << "Enter the value: ";
            cin >> val;
            insert_at_position(head, position, val);
        }

        else if (option == 4)
        {
            break;
        }
    }

    return 0;
}
