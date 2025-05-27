#include<bits/stdc++.h>
using namespace std;
int main ()
{
    //print
    cout << "HI, THIS IS MY FIRST PRINT STATEMENT" << endl;

    //Input
    int x;
    cin >> x;
    cout << "First Input Number is: " << x << endl;

    // Max , Min , Swap
    int y;
    cin >> y; 
    cout << "Second Input Number is: " << y << endl;

    int mx = max(x, y);
    cout << "Max Number is: " << mx << endl;

    int mn = min(x, y);
    cout << "Min Number is: " << mn << endl;

    swap(x, y);
    cout << "Swapped Number One is: " << x << endl << "Swapped Number Two is: " << y << endl;

    return 0;
}