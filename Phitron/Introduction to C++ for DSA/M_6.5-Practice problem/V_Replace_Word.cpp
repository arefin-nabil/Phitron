#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    while (1)
    {
        int idx = s.find("EGYPT");
        if (idx != -1)
        {
            s.replace(idx, 5, " ");
        } else break;
    }

    cout << s;

    return 0;
}