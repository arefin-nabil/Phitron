#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    for (int i = x; i <= y; i++)
    {
        printf("Digits: ");

        int n = i % 10;
        printf("%d ", n);
        i /= 10;
    }
    return 0;
}