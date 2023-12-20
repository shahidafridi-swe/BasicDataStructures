#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    cout << v.size() << endl;
    v.clear(); // Here v.clear() just do zero size but keep the value in memory 
    cout << v.size() << endl;
    cout << v[0] << endl;
    cout << v[1] << endl;
    cout << v[2] << endl;
    cout << v[3] << endl;



    return 0;
}