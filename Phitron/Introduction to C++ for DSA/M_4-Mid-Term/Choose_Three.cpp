#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int sum2 = 0;
        int n, sum;
        cin >> n >> sum;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    if (sum == arr[i] + arr[j] + arr[k])
                    {
                        sum2++;
                    }
                }
            }
        } 
        if (sum2 > 0)
        {
            cout << "YES" <<endl;
        }
        else
            cout << "NO" <<endl;
    }
    return 0;
}