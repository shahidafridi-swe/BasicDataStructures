#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1,2,3,2,4,3,2,6,2,3,8};
    auto it = find(v.begin(), v.end(), 100);
    (it == v.end()) ? cout << "Not Found" : cout << "Found" ;

    return 0;
} 