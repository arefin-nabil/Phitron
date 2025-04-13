#include<stdio.h>
int main()
{
    int num1, num2, sum, sub, div, mul, rem;
    scanf("%d", &num1);
    scanf("%d", &num2);
    sum = num1 + num2;
    printf("Summation of %d and %d is = %d\n", num1, num2, sum);
    sub = num1 - num2;
    printf("Subtraction of %d and %d is = %d\n", num1, num2, sub);
    mul = num1 * num2;
    printf("Multiplication of %d and %d is = %d\n", num1, num2, mul);
    div = num1 / num2;
    printf("Division of %d and %d is = %d\n", num1, num2, div);
    rem = num1 % num2;
    printf("Remainder of %d and %d is = %d\n", num1, num2, rem);
    return 0;
}