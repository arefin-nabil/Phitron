#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n == 1 || n == 2) {
        cout << -1 << endl;
        return 0;
    }
    for (int i = 2; i <= n; i++) {
        cout << i << " ";
    }
    cout << 1 << endl;
    return 0;
}