#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40};
    v.pop_back();
    for(int i=0; i<v.size(); i++)
        cout << v[i] << " ";
    
    cout << endl;

    v.pop_back();
    for(int i=0; i<v.size(); i++)
        cout << v[i] << " ";

    return 0;
}