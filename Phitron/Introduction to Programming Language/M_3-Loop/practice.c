// #include <stdio.h>
// int main()
// {
//     for (int j = 8; j <= 200; j = j + 8)
//     {
//         for (int i = 1; i <= 1; i++)
//         {
//             printf("8 * %d = %d\n", i, j);
//         }
//     }

//     return 0;
// }


#include<stdio.h>
int main ()
{
    for (int i = 100; i >= 1; i--)
    {
        if (i%2==1)printf("%d\n", i);
    }
    return 0;
}