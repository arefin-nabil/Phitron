#include <bits/stdc++.h>
using namespace std;
class stk
{
public:
    vector<int> v;
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    bool empty()
    {
        return v.empty();
    }
};

class que
{
public:
    list<int> l;
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_front();
    }
    int front()
    {
        return l.front();
    }
    bool empty()
    {
        return l.empty();
    }
};

int main()
{
    int n, m;
    stk st;
    que q;
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