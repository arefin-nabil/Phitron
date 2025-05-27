#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a, b, c;
    cin >> a >> b >> c ;
    int mn = 0;
    int mx = 0;
    mx = max({a, b, c});
    mn = min({a, b, c});
    cout << mn << " " << mx;
    return 0;
}