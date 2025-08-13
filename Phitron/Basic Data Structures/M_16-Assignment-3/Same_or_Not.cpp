#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    stack<int> st;
    queue<int> q;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }
    bool same = true;
    if (n != m)
        cout << "NO";
    else
    {
        while (!st.empty() && !q.empty())
        {
            if (st.top() != q.front())
            {
                same = false;
                break;
            }
            st.pop();
            q.pop();
        }
        if (same == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}