#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int x;
    cin >> x;
    int a = 0, d = 0;
    string s;
    cin >> s;
    for (int i = 0; i < x; i++)
    {
        if (s[i] == 'A')
        {
            a++;
        } else {
            d++;
        }
    }
    if ( a > d){
        cout << "Anton";
    }
    else if ( d > a){
        cout << "Danik";
    }
    else if ( a == d)
    {
        cout << "Friendship";
    }
    return 0;
}