#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k, H;
        cin >> n >> m >> k >> H;

        int h[50];
        for (int i = 1; i <= n; i++)
        {
            cin >> h[i];
        }

        int count = 0;
        for (int i = 1; i <= n; i++)
        {
            int man = abs(H - h[i]);

            if (man != 0 && man % k == 0 && man / k < m)
            {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}
