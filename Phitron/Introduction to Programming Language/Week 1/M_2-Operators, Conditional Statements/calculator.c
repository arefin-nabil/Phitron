#include <stdio.h>
int main()
{
    char oprtn;
    scanf("%c", &oprtn);
    int num1, num2, sum, sub, div, mul, rem;
    scanf("%d %d", &num1, &num2);

    if (oprtn == '+')
    {
        sum = num1 + num2;
        printf("Summation of %d and %d is = %d\n", num1, num2, sum);
    }
    else if (oprtn == '-')
    {
        sub = num1 - num2;
        printf("Subtraction of %d and %d is = %d\n", num1, num2, sub);
    }
    else if (oprtn == '*')
    {
        mul = num1 * num2;
        printf("Multiplication of %d and %d is = %d\n", num1, num2, mul);
    }
    else if (oprtn == '/')
    {
        div = num1 / num2;
        printf("Division of %d and %d is = %d\n", num1, num2, div);
    }
    else if (oprtn == '%')
    {
        rem = num1 % num2;
        printf("Remainder of %d and %d is = %d\n", num1, num2, rem);
    }
    else 
    {
        printf("Wrong input");
    }

    return 0;
}