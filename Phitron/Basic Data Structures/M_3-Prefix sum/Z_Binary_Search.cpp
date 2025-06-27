#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    while (q--)
    {
        int x;
        cin >> x;
        int l = 0, r = n - 1, flag = 0;
        while (l <= r)
        {
            int md = (l + r) / 2;
            if (v[md] == x)
            {
                flag = 1;
                break;
            }
            else if (v[md] > x)
            {
                r = md - 1;
            }
            else
                l = md + 1;
        }
        if (flag == 1)
            cout << "found" << endl;
        else
            cout << "not found" << endl;
    }

    return 0;
}