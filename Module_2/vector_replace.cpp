#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1,2,3,2,4,3,2,6,2,3,8};
    replace(v.begin(), v.end(), 2, 100); // replace all 2 to 100
    for(int x : v)
        cout << x << " ";
    return 0;
}