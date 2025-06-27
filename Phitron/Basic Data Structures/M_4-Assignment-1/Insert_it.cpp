#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n1, n2, x;
    cin >> n1;
    vector<int> v1(n1);
    for (int i = 0; i < n1; i++)
    {
        cin >> v1[i];
    }
    cin >> n2;
    vector<int> v2(n2);
    for (int i = 0; i < n2; i++)
    {
        cin >> v2[i];
    }
    cin >> x;
    v1.insert(v1.begin() + x, v2.begin(), v2.end());
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }

    return 0;
}