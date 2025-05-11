#include<stdio.h>
void hello(int i)
{
    if ( i == 0){ 
        return;
    }
    printf("%d", i); 
    if (i > 1) printf(" ");

    hello(i-1); 
    
}
int main()
{
    int i;
    scanf("%d", &i) ;
    hello(i);

    return 0;
}