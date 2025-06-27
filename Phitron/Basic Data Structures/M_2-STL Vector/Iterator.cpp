#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector v = {1, 2, 4, 5, 3, 9, 10, 3, 8, 7, 6};
    // auto it = find(v.begin(), v.end(), 55);
    // if (it == v.end())
    // cout << "Not found";
    // int n;
    // cin >> n;
    // vector<string> v(n);
    // cin.ignore();
    // for (int i = 0; i < 20; i++)
    // {
    //     getline(cin, v[i]);
    // }
    // if (v.empty() == true)
    // {
    //     for (string s : v)
    //     {
    //         cout << s << endl;
    //     }
    // }
    vector<int> v = {1, 2, 3, 4, 5};
    v.erase(v.begin()+2, v.end());
    for (int i = 0; i < 5; i++)
    {

        cout << v[i] << " ";
    }
    return 0;
}