#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    string cls;
    string s;
    string id;
};

int main()
{
    int t;
    cin >> t;

    Student a[t];
    for (int i = 0; i < t; i++)
    {
        // cin.ignore();
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id;
    }

    // reverse er condition here --------------
    // -------- TWO PONTERS ALGORITHM ---------
    int i = 0, j = t-1;
    while ( i < j)
    {
        swap(a[i].s, a[j].s);
        i++;
        j--;
    }
    // reverse er condition here --------------

    for (int i = 0; i < t; i++)
    {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id << endl;
        // cout << "hi";
    }
    return 0;
}