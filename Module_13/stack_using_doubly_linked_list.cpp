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
class myStack
{
public:
    Node * head = NULL;
    Node * tail = NULL;
    int s=0;
    void push(int val)
    {
        s++;
        Node * newNode = new Node(val);
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    void pop()
    {
        s--;
        Node * deleteNode = tail;
        tail = tail->prev;
        if(tail == NULL) 
        {
        head =NULL;
        }
        else{
            tail->next = NULL;
        }    
        delete deleteNode;
    }
    int top()
    {
        return tail->val;
    }
    int size()
    {
        return s;
    }
    bool empty()
    {
        return size() == 0 ? true : false;
    }

};

int main()
{
    myStack st;
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    
    while(!st.empty())
    {
        cout << st.top() << " " ;
        st.pop();
    } 

    return 0;
}