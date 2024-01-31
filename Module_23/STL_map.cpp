#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int > mp;
    // mp.insert({"Ayman",85});
    // mp.insert({"Shahid",86});
    // mp.insert({"Ruma",87});
    // mp.insert({"Rohan",90});

    mp["Ayman"] = 85;
    mp["Shahid"] = 86;
    mp["Ruma"] = 87;
    mp["Rohan"] = 90;


    cout << mp["Ayman"] <<endl; // case sensetive

    mp.count("ayan") ? cout << "Ache" << endl : cout << "Nai" << endl;


    // for(auto it = mp.begin(); it!=mp.end(); it++)
    // {
    //     cout << it->first << " " << it->second << endl;
    // }


    return 0;
}