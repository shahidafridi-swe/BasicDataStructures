#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string s;
    int i;

    Person(string s, int i)
    {
        this->s = s;
        this->i = i;
    }
};

class cmp
{
public:
    bool operator()(Person a, Person b)
    {
        if (a.s > b.s)
            return true;
        else if (a.s < b.s)
            return false;
        else
        {
            if (a.i < b.i)
                return true;
            else
                return false;
        }
    }
};
int main()
{
    int n;
    cin >> n;
    priority_queue<Person, vector<Person>, cmp> pq;

    for (int j = 0; j < n; j++)
    {
        string s;
        int i;
        cin >> s >> i;
        Person obj(s, i);
        pq.push(obj);
    }
    while (!pq.empty())
    {
        cout << pq.top().s << " " << pq.top().i << endl;
        pq.pop();
    }
    return 0;
}