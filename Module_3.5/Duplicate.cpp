#include <bits/stdc++.h>
using namespace std;

//Time complexity is O(n^2)

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    bool duplicate = false;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] == v[j])
            {
                duplicate = true;
            }
        }
    }
    duplicate ? cout << "YES" : cout << "NO";

    return 0;
}