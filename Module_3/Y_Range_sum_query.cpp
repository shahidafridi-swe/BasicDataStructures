// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Y

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long int prefix_sum[n];
    prefix_sum[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        prefix_sum[i] = prefix_sum[i - 1] + a[i];
    }

    while (q--)
    {
        int l, r;
        long long int sum = 0;
        cin >> l >> r;
        (l == 1) ? sum = prefix_sum[r - 1] : sum = prefix_sum[r - 1] - prefix_sum[l - 2];
        cout << sum << endl;
    }
    return 0;
}

// int main()
// {
//     int n, q;
//     cin >> n >> q;
//     int a[n];
//     long long int prefix_sum[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//         (i == 0) ? prefix_sum[i] = a[i]
//                  : prefix_sum[i] = prefix_sum[i - 1] + a[i];
//     }
//     while (q--)
//     {
//         int l, r;
//         long long int sum = 0;
//         cin >> l >> r;
//         (l == 1) ? sum = prefix_sum[r - 1] : sum = prefix_sum[r - 1] - prefix_sum[l - 2];
//         cout << sum << endl;
//     }
//     return 0;
// }

// int main()
// {
//     int n, q;
//     cin >> n >> q;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     while (q--)
//     {
//         int l, r;
//         long long int sum = 0;
//         cin >> l >> r;
//         for (int i = l - 1; i < r; i++)
//         {
//             sum += a[i];
//         }
//         cout << sum << endl;
//     }
//     return 0;
// }