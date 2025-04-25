#include <stdio.h>
#include <string.h>
int main()
{
    // int n;
    // scanf("%d", &n);
    // int a[n];

    // for (int i = 0; i<n; i++)
    // {
    //     scanf("%d", &a[i]);
    // }

    // int freq[10001] = {0};

    // for (int i = 0; i<n; i++)
    // {
    //     int val = a[i];
    //     freq[val]++;
    // }

    // for (int i = 0; i<6; i++)
    // {
    //     printf("%d - %d\n", i, freq[i]);
    // }

    char a[100001];
    scanf("%s", &a);

    int count[100001] = {0};

    for (int i = 0; i < strlen(a); i++)
    {
        int val = a[i];
        count[val]++;
    }

    for (int i = 97; i <= 122; i++)
    {
        if (count[i]>0)
        {
            printf("%c - %d\n", i, count[i]);
        } else{
            continue;
        }
        
        
    }

    return 0;
}