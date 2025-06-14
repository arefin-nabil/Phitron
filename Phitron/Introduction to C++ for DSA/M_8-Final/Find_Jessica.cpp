#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, word;
    getline(cin, s);
    int count = 0;
    stringstream ss(s);
    while (ss >> word)
    {
        if (word == "Jessica")
            count = 1;
    }
    if (count == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}

// Input 
// Rahat Rifat Sakib Asif Sifat Jessica Ratul Munna
// Rahat Rifat Sakib Asif jessica Sifat Ratul Munna


// Output 
// YES
// NO