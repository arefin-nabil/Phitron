#include <stdio.h>
void cello()
{
    printf("Cello\n");
    cello();
}
void tello()
{
    printf("Tello\n");
    cello();
    printf("Tello2\n");
}
void gello()
{
    printf("Gello\n");
    tello();
    printf("Gello2\n");
}
void hello()
{
    printf("Mello\n");
    gello();
    printf("Mello2\n");
}
int main()
{
    printf("Hello\n");
    hello();
    printf("Hello2\n");
    return 0;
}