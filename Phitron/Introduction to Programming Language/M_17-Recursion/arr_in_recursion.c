#include <stdio.h>
void printArray(int arr[], int n, int i)
{
    if (i == n)
    { // i == 6 // condition
        return;
    }
    printf("%d\n", arr[i]); // magic of recursion

    printArray(arr, n, i+1); // (i+1) // inc or dec
    // printf("%d\n", i); // magic of recursion
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printArray(arr, n, 0);

    return 0;
}