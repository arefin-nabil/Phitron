#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        //printf("%d", arr[i]);
    }
    int x;
    scanf("%d", &x);

    for (int j = 0; j < n; j++)
    {
        if (x == arr[j])
        {
            printf("%d", j);
            break;
        }
        else
        {
            printf("-1");
            break;
        }
    }
   

    return 0;
}