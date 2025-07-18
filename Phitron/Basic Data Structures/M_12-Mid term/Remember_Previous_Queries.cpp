#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    list<int> l;

    while (t--)
    {
        int idx, val;
        cin >> idx >> val;

        int sz = l.size();

        if (idx == 0)
        {
            l.push_front(val);
            cout << "L -> ";
            for (int val : l)
            {
                cout << val << " ";
            }
            cout << endl;
            l.reverse();

            cout << "R -> ";
            for (int val : l)
            {
                cout << val << " ";
            }
            cout << endl;
            l.reverse();
        }

        else if (idx == 1)
        {
            l.push_back(val);
            cout << "L -> ";
            for (int pr : l)
            {
                cout << pr << " ";
            }
            cout << endl;
            l.reverse();

            cout << "R -> ";
            for (int val : l)
            {
                cout << val << " ";
            }
            cout << endl;
            l.reverse();
        }

        else if (idx == 2)
        {
            if (val >= sz)
            {

                cout << "L -> ";
                for (int pr : l)
                {
                    cout << pr << " ";
                }
                cout << endl;
                l.reverse();

                cout << "R -> ";
                for (int val : l)
                {
                    cout << val << " ";
                }
                cout << endl;
                l.reverse();
            }
            else
            {
                l.erase(next(l.begin(), val));
                cout << "L -> ";
                for (int pr : l)
                {
                    cout << pr << " ";
                }
                cout << endl;
                l.reverse();

                cout << "R -> ";
                for (int val : l)
                {
                    cout << val << " ";
                }
                cout << endl;
                l.reverse();
            }
        }
    }
    return 0;
}