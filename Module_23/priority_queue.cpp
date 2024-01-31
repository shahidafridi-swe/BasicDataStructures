#include <bits/stdc++.h>
using namespace std;

int main()
{
    // priority_queue<int> pq; //for max heap
    priority_queue<int, vector<int>, greater<int>> pq; // for min heap

    while (true)
    {
        int c;
        cin >> c;
        if (c == 0) // insert
        {
            int x;
            cin >> x;
            pq.push(x);
        }
        else if (c == 1) // delete
        {
            pq.pop();
        }
        else if (c == 2)
        {
            cout << pq.top() << endl;
        }
        else
            break;
    }
    return 0;
}