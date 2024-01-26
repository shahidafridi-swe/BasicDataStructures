#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    vector<int> v;
    void push(int val) // O(1)
    {
        v.push_back(val);
    }
    void pop() // O(1)
    {
        v.pop_back();
    }
    int top() // O(1)
    {
        return v.back();
    }
    int size() // O(1)
    {
        return v.size();
    }
    bool empty() // O(1)
    {
        if (v.size() == 0)
            return true;
        else
            return false;
        // return (v.size() == 0) ?  true :  false;
    }

};

int main()
{

    myStack st;

    // st.push(10);
    // st.push(20);
    // cout << st.top() << endl;
    // st.pop();
    // cout << st.top() << endl;
    // // st.pop();
    // if(st.empty())
    //     cout << "There is no top in Stack, Stack is empty." << endl;
    // else
    //     cout << st.top() << endl;


    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    
    while(!st.empty())
    {
        cout << st.top() << " " ;
        st.pop();
    } 


    return 0;
}