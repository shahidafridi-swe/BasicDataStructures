#include <bits/stdc++.h>
using namespace std;

void insert(set<int> &s, int n)
{
    while (n--)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        set<int> s;
        int n;
        cin >> n;
        insert(s, n);
        for (auto it = s.begin(); it != s.end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }

    return 0;
}