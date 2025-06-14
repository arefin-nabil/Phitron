#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    int cnt;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        if(s.size() < 11)
        {
            cout << s << endl;
        }
        else 
        {
            for ( int j = 1; j < s.size()-1; j++)
            {
                cnt++;
            }
            cout << s.front() << cnt << s.back() << endl;
            cnt = 0;
        }
    }
    
    return 0;
}