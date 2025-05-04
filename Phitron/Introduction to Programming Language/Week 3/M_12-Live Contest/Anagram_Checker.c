#include <stdio.h>
#include<string.h>
int main()
{
    char s1[101];
    char s2[101];
    scanf("%s", &s1);
    scanf("%s", &s2);


    int count[200] = {0};
    int count2[200] = {0};
    int x;
    int y;

    for (int i = 0; i < strlen(s1); i++)
    {
        x = s1[i];
        count[x]++;
        printf("%d\n", count[i]);
    }

    
    for (int i = 0; i < strlen(s2); i++)
    {
        y = s2[i];
        count2[x]++;
    }

    
    for (int i = 'a'; i <= 'z'; i++)
    // {
    //     if (count[i]>0)
    //     {
    //         printf("%c - %d\n", i, count[i]);
    //     } else{
    //         continue;
    //     }
        
        
    // }


    // for (int i = 97; i <= 122; i++)
    // {
    //     if (count[x]==count2[y]) {
    //         printf("Yes");
    //     break;
    // }
    //     else {
    //         printf("No");
    //     break;
    //     }

    // }





    return 0;
}