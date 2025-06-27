#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> v2(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v2[i];
    }

    vector<int> c(n+n);
    c = v2;
    c.insert(c.begin() + n, v.begin(), v.end());

    for (int i = 0; i < n+n; i++)
    {
        cout << c[i] << " "; 
    }


    return 0;
}