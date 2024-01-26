#include <bits/stdc++.h>
using namespace std;

bool isSameStackQueue(stack<int> s, int n, queue<int> q, int m)
{
    if (n != m)
        return false;
    stack<int> tempS = s;
    queue<int> tempQ = q;
    for (int i = 0; i < n; i++)
    {
        if (tempS.top() != tempQ.front())
            return false;
        tempS.pop();
        tempQ.pop();
    }
    return true;
}

int main()
{
    stack<int> s;
    queue<int> q;
    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.push(x);
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    isSameStackQueue(s, n, q, m) ? cout << "YES" : cout << "NO";

    return 0;
}