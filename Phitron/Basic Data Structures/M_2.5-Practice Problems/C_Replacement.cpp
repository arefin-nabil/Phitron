#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] > 0)
        {
            replace(v.begin(), v.end(), v[i], 1);
            cout << v[i] << " ";
        }
        else if (v[i] < 0)
        {
            replace(v.begin(), v.end(), v[i], 2);
            cout << v[i] << " ";
        }
        else
            cout << v[i] << " ";
    }

    return 0;
}