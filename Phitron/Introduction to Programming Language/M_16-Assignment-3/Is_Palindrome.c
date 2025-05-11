#include <stdio.h>
#include <string.h>

int is_palindrome(char S[])
{
    char s1, s2;
    int i, j, count = 0;
    for (i = 0; i < strlen(S); i++)
    {
        s1 = S[i];
        // printf("%c ", s1);
    }
    printf("\n");
    for (j = strlen(S); j >= 0; j--)
    {
        s2 = S[j];
        //  printf("%c ", s2);
    }
    if (s1 == s2)
        count = 1;

    return count;
}

int main()
{
    char S[10000];
    scanf("%s", S);
    int count = is_palindrome(S);
    if (count == 1)
    {
        printf("Palindrome");
    }
    else if (count == 0)
        printf("Not Palindrome");

    return 0;
}