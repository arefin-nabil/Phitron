// Contest link:- 
// https://www.hackerrank.com/contests/assignment-01-a-introduction-to-c-programming-a-batch-07/challenges

// problem 1

// #include<stdio.h>
// int main()
// {
//     printf("Hello, world! I am learning C programming language. ^_^\n"
//             "Programming is fun and challenging. /\\/\\/\\ \n"
//             "I want to give my 100%c dedication to learn!\tI will succeed one day.", '%');
//     return 0;
// }




// problem 2

// #include<stdio.h>
// int main()
// {
//     long long int a, b;
//     scanf("%lld %lld", &a, &b);
//     printf("%lld", a*b);
//     return 0;
// }





// problem 3

// #include<stdio.h>
// int main ()
// {
//     int n;
//     scanf("%d", &n);
//     if (n%3==0) printf("YES");
//     else printf("NO");
//     return 0;
// }




// problem 4

// #include<stdio.h>
// int main ()
// {
//     int n;
//     scanf("%d", &n);
//     for (int i=1; i<=n; i++)
//     {
//         if (i%3==0 && i%7==0) printf("%d\n", i);
//     }
//     return 0;
// }




// problem 5

#include<stdio.h>
int main ()
{
    long long int n;
    scanf("%lld", &n);
    
    if (n>1000)
    {
        printf("I will buy Punjabi\n");
        if (n-1000>=500)
        {
            printf("I will buy new shoes\nAlisa will buy new shoes\n");
        }
    } 
    else printf("Bad luck!");

    return 0;
}