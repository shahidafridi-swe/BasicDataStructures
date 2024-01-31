#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        int current_index = v.size() - 1;
        while (current_index != 0)
        {
            int parent = (current_index - 1) / 2;
            if (v[parent] > v[current_index])
                swap(v[parent], v[current_index]);
            else
                break;
            current_index = parent;
        }
    }
    for (int val : v)
        cout << val << " ";
    cout << endl;

    return 0;
}