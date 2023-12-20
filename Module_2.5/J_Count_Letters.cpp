#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    vector<int> count_v(26, 0); // Counting Array // Frequency Array

    for (int i = 0; i < s.length(); i++)
    {
        int value = s[i]-97;
        count_v[value]++;
    }

    for (int i = 0; i < 26; i++)
    {   
        if(count_v[i] !=0)
        {
            char c = i+97;
            cout << c << " : " << count_v[i] << endl;
        }
    }

    return 0;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J