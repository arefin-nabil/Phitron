#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int x;
    int i;
    int max = 0;
    for (i =1; i<=n; i++)
    {
        scanf("%d", &x);
        
        if (max < x) 
        {
            max = x;
        }
    }
    printf("%d ", max);
    return 0;
}


