#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {10, 20, 30, 40};
    // list<int> newList;
    // newList = myList; // we use it 
    // newList.assign(myList.begin(), myList.end());
    
    // myList.push_back(200);
    // myList.push_front(100);
    // myList.pop_back();
    // myList.pop_front();

    // myList.insert(next(myList.begin(),2),100);
    // myList.erase(next(myList.begin(),2));
    
    // myList.insert(next(myList.begin(),2),{100,200,300});
    // myList.erase(next(myList.begin(),2), next(myList.begin(),5));

    // myList.insert(next(myList.begin(),2),v.begin(), v.end());

    replace(myList.begin(), myList.end(), 30, 100); // here all 30 will replace by 100 from the list 


    for (int val : myList)
    {
        cout << val << endl;
    }

    auto it = find(myList.begin(), myList.end(), 60);
    if(it == myList.end())
    {
        cout << "Not Found";
    }
    else {
        cout << "Found";
    }

    return 0;
}