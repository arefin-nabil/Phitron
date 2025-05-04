// I. Welcome for you with Conditions 

// #include<stdio.h>
// int main()
// {
//     int A, B;
//     scanf("%d %d", &A, &B);
//     if (A>=B) printf ("Yes");
//     else printf ("No");
//     return 0;
// }



// J. Multiples 

// #include<stdio.h>
// int main()
// {
//     int a, b;
//     scanf("%d %d", &a, &b);
//     if (a%b==0 || b%a==0) printf("Multiples");
//     else printf("No Multiples");
//     return 0;
// }




// P. First digit ! 

// #include<stdio.h>
// int main()
// {
//     int x;
//     scanf("%d", &x);
//     int dgt;
//     dgt = x/1000;
//     if (dgt%2==0) printf("EVEN");
//     else printf("ODD");
//     return 0;
// }




// N. Char 

// #include<stdio.h>
// int main()
// {
//     char x;
//     scanf("%c", &x);
//     if (x>=65 && x<=90) printf ("%c", x+32);
//     else if (x>=97 && x<=122) printf("%c", x-32);
//     return 0;
// }



// M. Capital or Small or Digit 

// #include<stdio.h>
// int main()
// {
//     char x;
//     scanf("%c", &x);
//     if (x>=48 && x<=57) printf("IS DIGIT");
//     else if (x>=97 && x<=122) printf("ALPHA\nIS SMALL");
//     else if (x>=65 && x<=90) printf("ALPHA\nIS CAPITAL");
//     return 0;
// }




// K. Max and Min 

#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
  
         if (a<=b && a<=c) printf("%d ", a);
    else if (b<=c && b<=a) printf("%d ", b);
    else if (c<=a && c<=a) printf("%d ", c);

         if (a>=b && a>=c) printf("%d", a);
    else if (b>=c && b>=a) printf("%d", b);
    else if (c>=a && c>=b) printf("%d", c);

    return 0;
}