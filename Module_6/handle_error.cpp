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
    if(head == NULL)
    {
        cout << "The linked list is empty ! You have to add a head at first." << endl << endl;
        return;
    }
    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 1; i <= position - 1; i++)
    {
        temp = temp->next;
        if(temp == NULL)
        {
            cout << "Invalid Index !!! Index should be 0 to " << i << endl <<endl   ;
            return ;
        }
    }
    newNode->next = temp->next;
    temp->next = newNode;
    cout << endl
         << endl
         << "Inserted " << val << " at position no: " << position << endl
         << endl;
}

void insert_at_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
    cout << endl
         << "Inserted " << val << " at head" << endl
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

void delete_from_position(Node *head, int position)
{   
    if(head == NULL)
    {
        cout << "Already linked list is Empty !!!" << endl << endl;
        return;
    }
    Node *temp = head;
    for (int i = 1; i <= position - 1; i++)
    {
        temp = temp->next;
        if(temp == NULL)
        {
            cout << "Invalid Index !!! Index should be 0 to " << i-1 << endl <<endl   ;
            return ;
        }
    }
    if(temp->next == NULL)
        {
            cout << "Invalid Index !!!"  << endl <<endl   ;
            return ;
        }
    Node *deleteNode = temp->next;
    cout << endl
         << "Deleted Node ! Position NO: " << position << " and The Value: " << deleteNode->val << endl
         << endl;
    temp->next = temp->next->next;
    delete deleteNode;
}
void delete_head(Node *&head)
{
    if(head == NULL)
    {
        cout << "Head is not available !!!" << endl << endl;
        return;
    }
    Node *deleteNode = head;
    head = head->next;
    cout << "Deleted head ! The value was: " << deleteNode->val << endl
         << endl;
    delete deleteNode;
}

int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Type 0 : For Insert at Head" << endl;
        cout << "Type 1 : For Insert at Tail" << endl;
        cout << "Type 2 : For Print Linked List" << endl;
        cout << "Type 3 : For Insert at any Position" << endl;
        cout << "Type 4 : For Delete node from Position" << endl;
        cout << "Type 5 : For Delete Head" << endl;
        cout << "Type 6 : For Terminate" << endl;
        cout << endl
             << "Type Here... ";
        int option;
        cin >> option;

        if (option == 0)
        {
            int val;
            cout << "Please insert the value for head: ";
            cin >> val;
            insert_at_head(head, val);
        }
        else if (option == 1)
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
            if (position == 0)
            {
                insert_at_head(head, val);
            }
            else
            {
                insert_at_position(head, position, val);
            }
        }
        else if (option == 4)
        {
            int position;
            cout << "Enter the position: ";
            cin >> position;
            if (position == 0)
            {
                delete_head(head);
            }
            else
            {
                delete_from_position(head, position);
            }
        }
        else if (option == 5)
        {
            delete_head(head);
        }
        else if (option == 6)
        {
            break;
        }
    }

    return 0;
}
