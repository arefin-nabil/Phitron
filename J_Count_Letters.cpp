#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int freq[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        int val = s[i];
        freq[val]++;
    }
    for (int j = 0; j <= 26; j++)
    {
        cout << " : " << freq[j] << endl;
    }

    return 0;
}