#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int num1 = 0, num2 = 0;
    int arr[n + 1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0 || arr[i] % 2 == 0 && arr[i] % 3 == 0)
        {
            num1++;
        }
        else if (arr[i] % 3 == 0)
        {
            num2++;
        }
    }

    printf("%d %d", num1, num2);

    return 0;
}