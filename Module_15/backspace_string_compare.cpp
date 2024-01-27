// https://leetcode.com/problems/backspace-string-compare/description/

class Solution
{
public:
    bool backspaceCompare(string s, string t)
    {
        stack<char> stS;
        stack<char> stT;

        for (char c : s)
        {
            if (c != '#')
                stS.push(c);
            else
            {
                if (!stS.empty())
                    stS.pop();
            }
        }
        for (char c : t)
        {
            if (c != '#')
                stT.push(c);
            else
            {
                if (!stT.empty())
                    stT.pop();
            }
        }
        return stS == stT;
    }
};