#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    // for (int i = 0; i < t; i++)
    // {
    //     string s;
    //     cin >> s;
    //     string s1;
    //     cin >> s1;
    //     while (1)
    //     {
    //         int idx = s.find(s1);
    //         if (idx != -1)
    //         {
    //             s.replace(idx, s1.size(), "#");
    //         }
    //         else
    //             break;
    //     }
    //     cout << s << endl;
    // }

    while(t--)
    {
                string s;
        cin >> s;
        string s1;
        cin >> s1;
        while (1)
        {
            int idx = s.find(s1);
            if (idx != -1)
            {
                s.replace(idx, s1.size(), "#");
            }
            else
                break;
        }
        cout << s << endl;
    }

    return 0;
}



// input

// 2
// rahimisagoodguy good
// canyoutellmewhereicanfindheriwillbegreatefultoyouifyoutellmetheanswer you

// Output 

// rahimisa#guy
// can#tellmewhereicanfindheriwillbegreatefulto#if#tellmetheanswer