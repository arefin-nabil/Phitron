#include<bits/stdc++.h>
using namespace std;
int main ()
{
    // normal array
    int ar[5];
    for (int i = 0; i<5; i++)
    {
        cin >> ar[i];
        cout << ar[i] << " ";
    }

    // Dynamic Array

    cout << endl << "DYNAMIC" << endl;
    int * arr = new int[5];
    for (int i = 0; i<5; i++)
    {
        cin >> arr[i];
        cout << arr[i] << " ";
    }

    return 0;
}