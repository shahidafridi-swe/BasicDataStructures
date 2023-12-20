#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> v; // type 1
    // vector<int> v(5); // type 2
    // vector<int> v(5,10); // type 3

    // vector<int> v2(5, 20);// type 4
    // vector<int> v(v2);//type 4

    // int a[5]{1, 2, 3, 4, 5}; //type 5
    // vector<int> v(a, a + 5); // type 5

    vector<int> v = {1, 2, 3, 4}; // Direct Initialization

    cout << v.size() << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}