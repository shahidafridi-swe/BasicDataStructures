#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        bool sorted = true;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (v[i] > v[j])
                {
                    sorted = false;
                    break;
                }
            }
        }
        sorted ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}