#include<stdio.h>
int main()
{
    int n, sum = 0; 
    scanf("%d", &n);
    char num[n];
    for (int i = 0; i<=n; i++)
    {
        scanf("%s", &num[i]);
        sum = sum-48 + num[i];   
    }
    if (sum%3==0) printf("YES");
    else printf("NO");
    return 0;
}