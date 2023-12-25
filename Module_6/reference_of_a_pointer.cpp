#include <bits/stdc++.h>
using namespace std;

void fun(int *&p) // &p is called reference, where its not create a new variable. it's address is the ptr's address
{
    p = NULL;
    cout << p << endl;
    cout << &p << endl;
}

int main()
{
    int val = 10;
    int *ptr = &val;
    fun(ptr);
    cout << ptr << endl;
    cout << &ptr << endl;

    cout << val << endl;
    
    return 0;
}