#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string, int> l, pair<string, int> r)
{
    if (l.first == r.first)
        return l.second > r.second;
    else
        return l.first < r.first;
}

int main()
{
    vector<pair<string, int>> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string name;
        int marks;
        cin >> name >> marks;
        v.push_back({name, marks});
    }

    sort(v.begin(), v.end(), cmp);

    for (int i = 0; i < n; i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
    return 0;
}
