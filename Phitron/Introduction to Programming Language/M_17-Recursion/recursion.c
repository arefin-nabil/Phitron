#include<stdio.h>
void hello(int i)
{
    if ( i == 0){ // i == 6 // condition
        return;
    }
    printf("%d\n", i); // magic of recursion

    hello(i-1); // (i+1) // inc or dec
    // printf("%d\n", i); // magic of recursion
}
int main()
{
    int i = 5; // i = 1 // initialization
    hello(i);

    return 0;
}