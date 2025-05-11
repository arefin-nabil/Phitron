#include<stdio.h>
void hello(int i)
{
    if ( i == 0){ 
        return;
    }

    hello(i-1); 
    printf("%d\n", i); 
}
int main()
{
    int i;
    scanf("%d", &i) ;
    hello(i);

    return 0;
}