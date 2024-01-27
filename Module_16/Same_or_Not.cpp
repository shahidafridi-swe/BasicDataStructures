#include <bits/stdc++.h>
using namespace std;

bool isSameStackQueue(stack<int> st, queue<int> q, int n, int m)
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
    stack<int> st;
    queue<int> q;

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