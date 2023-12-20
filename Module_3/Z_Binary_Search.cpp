// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Z

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

    sort(a, a + n); // Sorting the array -> O(n log n)

    // Binary search -> O(q * log n)

    while (q--)
    {
        int x;
        cin >> x;
        bool found = false;
        int l = 0, r = n - 1;
        while (l <= r)
        {
            int mid_index = (l + r) / 2;
            if (x < a[mid_index])
            {
                r = mid_index - 1;
            }
            else if (x > a[mid_index])
            {
                l = mid_index + 1;
            }
            else
            {
                found = true;
                break;
            }
        }

        (found) ? cout << "found" << endl
                : cout << "not found" << endl;
    }

    return 0;
}


// Brute Force Approach -> O(Nq)

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
//         int x;
//         cin >> x;
//         bool found = false;
//         for (int i = 0; i < n; i++)
//         {
//             if (a[i] == x)
//             {
//                 found = true;
//                 break;
//             }
//         }
//         (found) ? cout << "found" << endl
//                 : cout << "not found" << endl;
//     }
 
//     return 0;
// }