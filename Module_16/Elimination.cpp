#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        stack<char> st;
        string s;
        cin >> s;

        for (char c : s)
        {
            if (c == '0')
                st.push(c);
            else
            {
                if(!st.empty() && st.top() == '0')
                {
                    st.pop();
                }
                else
                {
                    st.push(c);
                }
            }
        }
        st.empty() ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}