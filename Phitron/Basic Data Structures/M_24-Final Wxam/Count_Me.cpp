#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string word;
        map<string, int> mp;
        int count = 0;
        string mxwrd;
        while (ss >> word)
        {
            mp[word]++;
            if (mp[word] > count)
            {
                count = mp[word];
                mxwrd = word;
            }
        }
        // for (auto it = mp.begin(); it != mp.end(); it++)
        // {
        //     cout << it->first << " " << it->second << endl;
        // }
        cout << mxwrd << " " << count << endl;
    }
    return 0;
}