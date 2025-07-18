#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<string> w;
    while (true)
    {
        string wb;
        cin >> wb;
        if (wb == "end")
            break;
        else
            w.push_back(wb);
    }

    int t;
    cin >> t;
    auto trk = w.begin();
    while (t--)
    {
        string data;
        cin >> data;
        // auto it = find(w.begin(), w.end(), data);
        if (data == "visit")
        {
            string d;
            cin >> d;
            auto it = find(w.begin(), w.end(), d);
            // auto it = find(w.begin(), w.end(), data);

            if (it != w.end())
            {
                cout << *it << endl;
                trk = it;
            }
            else
                cout << "Not Available" << endl;

            // if (it != w.end())
            // {
            //     cout << *it << endl;
            //     current = it;
            // }
            // else
            // {
            //     cout << "Not Available" << endl;
            // }
        }
        else if (data == "prev")
        {

            // if (prev(trk) != prev(w.begin()))
            // {
            //     trk = prev(trk);
            //     cout << *trk << endl;
            // }
            // else
            // {
            //     cout << "Not Available" << endl;
            // }

            // auto it1 = prev(trk);
            if (trk == w.begin())
            {
                cout << "Not Available" << endl;
            }
            else
            {
                trk = prev(trk);
                cout << *trk << endl;
            }
        }
        else if (data == "next")
        {
            if (next(trk) != w.end())
            {
                trk = next(trk);
                cout << *trk << endl;
            }
            else
                cout << "Not Available" << endl;
        }
    }

    // for (string v : web)
    // {
    //     cout << v << " ";
    // }
    return 0;
}