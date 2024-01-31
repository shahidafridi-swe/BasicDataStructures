#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    getchar();

    while (t--)
    {

        string sentence;
        getline(cin, sentence);

        string word;
        stringstream ss(sentence);
        map<string, int> mp;
        string s;
        int mx = 0;

        while (ss >> word)
        {

            mp[word]++;
            if (mp[word] > mx)
            {
                mx = mp[word];
                s = word;
            }
        }

        cout << s << " " << mp[s] << endl;
    }

    return 0;
}