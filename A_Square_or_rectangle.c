#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    int l, w;

    while (scanf("%d %d", &l, &w) != EOF)
    {
        
        if (l == w)
        {
            printf("Square\n");
        }
        if (l != w)
        {
            printf("Rectangle\n");
        }
    }

    return 0;
}