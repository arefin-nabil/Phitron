#include<stdio.h>
int main()
{
    long long int t, n, facto = 1; // set value of facto 1
    scanf("%lld", &t);
    if (n==0) printf("1");  // As 0! = 1
    while( scanf("%lld", &n) != EOF)  //
    {
        for (int i =1; i<=n; i++)
        {
            facto = facto*i;    // formula of a factorial
        }
        printf("%lld\n", facto);       // printing the last value
        facto = 1;      // again initializing the value of facto 1
    }
    return 0;
}