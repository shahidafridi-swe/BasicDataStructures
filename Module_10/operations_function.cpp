#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {20, 30, 10, 50, 40, 10, 10};

    // myList.remove(10); //  here remove the all 10 from the list

    myList.sort();
    myList.sort(greater<int>()); // Sort on descending order
    myList.unique();
    myList.reverse();

    for (int val : myList)
    {
        cout << val << endl;
    }

    return 0;
}