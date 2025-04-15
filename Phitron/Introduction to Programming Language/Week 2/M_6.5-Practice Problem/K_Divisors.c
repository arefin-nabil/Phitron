#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i =1; i<=n; i++)
    {
        if (n%i==0) // here, input n is checking by all numbers of "i" is that divisible or not
        {
            printf("%d\n", i);
        }
    }
    return 0;
}