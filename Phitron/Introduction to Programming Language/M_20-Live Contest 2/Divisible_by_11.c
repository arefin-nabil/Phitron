#include <stdio.h>
#include <string.h>

int main() {
    char n[101]; 
    scanf("%s", n);

    int odd = 0, even = 0;

    for (int i = strlen(n) - 1, j = 1; i >= 0; i--, j++) {
        int digit = n[i] - '0';
        if (j % 2 == 1)
            odd += digit;
        else
            even += digit;
    }

    int x = abs(odd - even);

    if (x % 11 == 0)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
