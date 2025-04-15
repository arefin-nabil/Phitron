#include <stdio.h>
int main()
{
    int t, x, y;
    scanf("%d", &t);
    while (scanf("%d %d", &x, &y) != EOF) //EOF means End Of File,, that means the datas will scan under scanf is till the ending of input file.
    {                   // if we dont use EOF it may hamper on our code.
        if (x > y)
        {               // here, we sorting/rearranging the numbers if there is ani number greater than nextone
            int temp = x; // vale of x is in temp
            x = y;  // vale of y is in x (that means, y is now x)
            y = temp; // stored value of x in temp now is assigned in y (x is now y)
        }
        int sum = 0;
        for (int a = x + 1; a < y; a++) // we are excluding x and y
        {
            if (a % 2 != 0)
                sum = sum + a;  // calculation the summation value 
        }
        printf("%d ", sum);
        printf("\n");
    }
    return 0;
}