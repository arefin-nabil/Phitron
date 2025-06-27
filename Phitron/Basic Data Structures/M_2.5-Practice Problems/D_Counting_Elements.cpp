#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (v[i] + 1 == v[j])
            {
                x++;
                //cout << v[i] << " + 1 = " << v[j] << endl;
                break;
                
            }
        }
        // if (v[i] == find(v.begin(), v.end(), v[i] + 1))
        // {
        //     x++;
        // }
    }

    cout << x;
    return 0;
}
