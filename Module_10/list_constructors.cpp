#include <bits/stdc++.h>
using namespace std;

int main()
{
    // list<int>myList;

    // list<int>myList(10);
    // cout << myList.front(); // output-> 0

    // list<int>myList(10,5);
    // cout << myList.front(); // output-> 5

    // list<int> myList(10, 5);

    // list<int> list2 = {1,2,3,4,5};
    // list<int> myList(list2);

    // int a[5] = {10, 20, 30, 40, 50};
    // list<int> myList(a, a + 5);

    vector<int> v = {100,200,300,400};
    list<int> myList(v.begin(), v.end());

    // for (auto it = myList.begin(); it != myList.end(); it++)
    // {
    //     cout << *it << endl;
    // }

    for(int val: myList)
    {
        cout << val << endl;
    }

    return 0;
}