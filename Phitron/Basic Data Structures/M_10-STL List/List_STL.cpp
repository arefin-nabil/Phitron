#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l;
    // list<int> l(10);
    // list<int> l(10, 3);
    // list<int> l = {5, 8, 2, 6, 1, 2, 3, 5, 4};
    // cout << l.size();
    // cout << *l.begin();
    // cout << *l.end();
    // cout << l.size() << endl;
    // l.clear();
    // cout << l.size() << endl;
    // if (l.empty())
    //     cout << "empty" << endl;
    // l.resize(10, 5);
    // cout << l.size() << endl;

    // for (auto it = l.begin(); it != l.end(); it++)
    // {
    //     cout << *it << " " << endl;
    // }

    // l.push_back(10);
     l.push_front(10);
     l.push_front(20);
     l.push_front(30);
     // l.pop_back();
     // l.pop_front();

     // cout << * next(l.begin(), 2);

     // l.insert(next(l.begin(), 2), 100);
     // l.insert(next(l.begin(), 2), l2.begin(), l2.end());

     // l.erase(next(l.begin(), 1), next(l.begin(), 3));
     // replace(l.begin(), l.end(), 2, 5);

     // auto it = find(l.begin(), l.end(), 5);
     // if (it == l.end()) cout << "not found" << endl;
     // else cout << "found" << endl;

     // l. remove(5);
     // l.sort();
     // l.sort(greater<int>());
     // l.unique();
     // l.reverse();n

     for (int val : l)
     {
         cout << val << " ";
     }
    return 0;
}