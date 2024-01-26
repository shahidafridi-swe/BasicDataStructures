#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList;

    int q;
    cin >> q;
    while (q--)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
            myList.push_front(v);
        else if (x == 1)
            myList.push_back(v);
        else if (x == 2)
            if(v<myList.size())
                myList.erase(next(myList.begin(), v));

        cout << "L -> ";
        for (int val : myList)
        {
            cout << val << " ";
        }
        cout << endl ;

        cout << "R -> ";
        myList.reverse();
        for (int val : myList)
        {
            cout << val << " ";
        }
        cout << endl ;

        myList.reverse();


    }

    return 0;
}