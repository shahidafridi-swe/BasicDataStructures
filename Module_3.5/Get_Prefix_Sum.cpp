#include <bits/stdc++.h>
using namespace std;

//Time complexity is O(n)

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<long long int> prefix_sum_v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    prefix_sum_v[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        prefix_sum_v[i] = prefix_sum_v[i - 1] + v[i];
    }
    reverse(prefix_sum_v.begin(), prefix_sum_v.end());
    for (int i = 0; i < n; i++)
    {
        cout << prefix_sum_v[i] << " ";
    }

    return 0;
}
