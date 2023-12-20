#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> v2 = {100, 200, 300};
    v.insert(v.begin() + 0, 10);
    v.insert(v.begin() + 2, 30);

    v.insert(v.begin() + 4, v2.begin(), v2.end());
    for (int x : v)
        cout << x << " ";

    return 0;
}