#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    
    for(int i=0; i<v.size(); i++)
        cout << v[i] << " ";
    cout  << endl;
    
    v.resize(2);

    for(int i=0; i<v.size(); i++)
        cout << v[i] << " ";
    cout  << endl;

    // v.resize(7); // the extend size will fill up by 0
    v.resize(7, 55); // the extend size will fill up by 55

    for(int i=0; i<v.size(); i++)
        cout << v[i] << " ";

    return 0;
}