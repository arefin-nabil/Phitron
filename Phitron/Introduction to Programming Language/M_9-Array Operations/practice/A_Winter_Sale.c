#include<stdio.h>
int main()
{
    float a, b;
    scanf("%f %f", &a, &b);
    float cal = (b*100)/(100-a);
    printf("%.2f", cal);
    return 0;
}