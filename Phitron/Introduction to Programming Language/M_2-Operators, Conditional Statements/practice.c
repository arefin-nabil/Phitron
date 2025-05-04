// Find the Largest of Three Numbers
// Take three numbers as input.
// Use relational operators to find the largest.

#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("Numbers Are: %d %d %d\n", a, b, c);
    if (a>b && b>c)
    {
    printf("big to small: %d %d %d\n", a, b, c);
    } else if (b>a && a>c)
    {
    printf("big to small: %d %d %d\n", b, a, c);
    } else if (c>a && a>b)
    {
    printf("big to small: %d %d %d\n", c, a, b);
    } else if (a<b && b<c)
    {
    printf("big to small: %d %d %d", c, b, a);
    } else if (b>c && c>a)
    {
    printf("big to small: %d %d %d", b, c, a);
    } else if (b<a && a<c)
    {
    printf("big to small: %d %d %d", c, b, a);
    } else if (b<c && c<a)
    {
    printf("big to small: %d %d %d", a, c, b);
    } else 
    {
    printf("wrong input");
    }
    return 0;
}
