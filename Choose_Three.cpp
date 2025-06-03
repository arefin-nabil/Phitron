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

        // if (n < 3)
        // {
        //     cout << "NO";
        // }
        // else
        // {
            for (int i = 0; i < n; i++)
            {
                for (int j = n - 1; j > 0; j--)
                {

                    int sum2 = arr[i] + arr[j] + arr[i + 1];
                    sum2++;
                }
            }
        // }
        cout << endl;

        if (sum2 > 0)
        {
            cout << "YES";
        }
        else
            cout << "NO";

        // for (int i = 0; i< n; i++)
        // {
        //     cout << arr[i] << " ";
        // }
        // cout << endl;
    }
    return 0;
}