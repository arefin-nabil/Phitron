// //Declare an int, float, and char variable. Assign values and print them using printf().

// #include<stdio.h>
// int main()
// {
//     int numint;
//     float numfloat = 300.256;
//     char character = 'N';
//     numint = 256300;
//     printf("Integer value is = %d\nFloat value is = %f\nCharacter is = %c", numint, numfloat, character);
//     return 0;
// }


// //Take an int, float, char, and double as input from the user and print them.

// #include<stdio.h>
// int main()
// {
//     int nint;
//     float nfloat;
//     char character;
//     double ndouble;
//     scanf("%d %f %c %lf", &nint, &nfloat, &character, &ndouble);
//     printf("Integer = %d\nFloat = %f\nCharacter = %c\nDouble = %lf", nint, nfloat, character, ndouble);
//     return 0;
// }


// //Print the size of int, float, double, and char using sizeof().

// #include<stdio.h>
// int main()
// {
//     int nint ;
//     float nfloat = 3.63;
//     char character = 'N';
//     double ndouble = 36.236;
//     printf("%d %d %d %d",sizeof(nint), sizeof(nfloat), sizeof(character), sizeof(ndouble));
//     return 0;
// }


//Take a character input from the user and print it.

#include<stdio.h>
int main()
{
    char character;
    scanf("%c", &character);
    printf("Character is = %c", character);
    return 0;
}

