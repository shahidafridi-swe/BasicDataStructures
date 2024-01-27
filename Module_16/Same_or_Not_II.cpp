#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    list<int>l;
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_back();
    }
    int top()
    {
        return l.back();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        return (l.size() == 0) ?  true :  false;
    }
};

class myQueue
{
public:
    list<int> l;
    void push(int val)
    {
        l.push_back(val);
    }

    void pop()
    {
        l.pop_front();
    }

    int front()
    {
        return l.front();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        return l.empty();
    }
};


bool isSameStackQueue(myStack st, myQueue q, int n, int m)
{
    if (n != m)
        return false;

    while (!st.empty())
    {
        if (st.top() != q.front())
            return false;
        st.pop();
        q.pop();
    }
    return true;
}
int main()
{
    myStack st;
    myQueue q;

    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    isSameStackQueue(st, q, n, m) ? cout << "YES" : cout << "NO";

    return 0;
}