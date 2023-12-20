#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; // steps 1
    cin >> n; // steps 1
    int a[n]; // steps 1
    for (int i = 0; i < n; i++) // steps O(N)
    {
        cin >> a[i]; 
    }
    int s = 0; // steps 1
    for (int i = 0; i < n; i++) // steps O(N)
    {
        s += a[i]; // steps 1
    }
    cout << s << endl; // steps 1
    return 0;
}
//----------------------------------------
// O(N+N) -> O(2N)  -> O(N) // Ignore Constants