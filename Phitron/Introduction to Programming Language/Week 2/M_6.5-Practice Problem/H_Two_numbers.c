#include <stdio.h>
int main()
{
    float a, b;
    scanf("%f %f", &a, &b);
    int c = a / b;
    if (a / b == 1)
    {
        printf("floor %.f / %.f = %d\n", a, b, c);
        printf("ceil %.f / %.f = %d\n", a, b, c);
    }
    else
    {

        printf("floor %.f / %.f = %d\n", a, b, c);
        printf("ceil %.f / %.f = %d\n", a, b, c + 1);
    }

    int n1 = a / b;
    if ((a / b) - n1 >= 0.5)
    {
        printf("round %.f / %.f = %d\n", a, b, n1 + 1);
    }
    else
    {
        printf("round %.f / %.f = %d\n", a, b, n1);
    }

    return 0;
}