#include<stdio.h>
void hello(int i)
{
    if ( i == 0){ 
        return;
    }
    printf("I love Recursion\n");

    hello(i-1); 

}
int main()
{
    int i;
    scanf("%d", &i) ;
    hello(i);

    return 0;
}