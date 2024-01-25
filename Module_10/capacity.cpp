#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {10, 20, 30, 40};
    // cout << myList.max_size();

    // myList.clear();
    // cout << myList.size() << endl; // Output -> 0

    myList.resize(2);     // List is now -> {10, 20}
    myList.resize(5);     // List is now -> {10, 20, 0, 0, 0}
    myList.resize(2);     // List is now -> {10, 20}
    myList.resize(5, 55); // List is now -> {10, 20, 55, 55, 55}

    for (int val : myList)
    {
        cout << val << endl;
    }

    return 0;
}