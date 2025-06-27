#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<long long> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    vector<long long> pre(n + 1);
    pre[1] = v[1];
    for (int i = 2; i <= n; i++)
    {
        pre[i] = pre[i - 1] + v[i];
    }
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << pre[i] << " ";
    // }

    while (q--)
    {
        int cnt = 0;
        int b, e;
        cin >> b >> e;
        long long sum = 0;
        if (b == 1)
        {
            sum = pre[e];
        }
        else
        {
            sum = pre[e] - pre[b - 1];
        }
        cout << sum << endl;
        // cout << endl;
    }
    return 0;
}