#include<stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    if (num % 5 == 0 && num % 7 == 0)
    {
        printf("The number %d is divisible by both 5 and 7", num);
    }
    else 
    {
        printf("The number %d is not divisible by both 5 and 7", num);
    }
    return 0;
}