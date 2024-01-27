#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack<char> st;

        for (char c : s)
        {
            if (!st.empty())
            {

                if (c == '0' && st.top() == '1')
                {
                    st.pop();
                }
                else if (c == '1' && st.top() == '0')
                {
                    st.pop();
                }
                else
                {
                    st.push(c);
                }
            }
            else
            {
                st.push(c);
            }
        }
        st.empty() ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}