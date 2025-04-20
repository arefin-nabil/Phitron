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
    int x, z;
    scanf("%d", &x);

    while (x == arr[i])
    {

            printf("%d", i);

        // if (x!=arr[i])
        // {
        //     z = -1;
        //     //printf("-1");
           
        // }

        i++;
        
        
    }


   

    return 0;
}