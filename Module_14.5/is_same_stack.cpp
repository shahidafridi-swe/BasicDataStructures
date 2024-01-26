#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    list<int> l;
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
        return l.empty();
    }
};

bool isSameStack(myStack st1, myStack st2, int n, int m)
{
    if (n != m)
        return false;
    myStack temp1 = st1;
    myStack temp2 = st2;
    for (int i = 0; i < n; i++)
    {
        if (temp1.top() != temp2.top())
        {
            return false;
        }
        temp1.pop();
        temp2.pop();
    }
    return true;
}

int main()
{
    myStack st1;
    myStack st2;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st1.push(x);
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        st2.push(x);
    }

    isSameStack(st1, st2, n, m) ? cout << "YES" : cout << "NO";

    return 0;
}