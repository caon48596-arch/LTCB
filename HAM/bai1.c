#include <stdio.h>
#include <stdbool.h>
int check(int a, int b)
{
    if (a == 0 || b == 0)
        return 0;
    if (a % b == 0)
        return 1;
    return 0;
}
int check1()
{
    int a, b;
    scanf("%d%d", &a, &b);
    if (a == 0 || b == 0)
        return 0;
    if (a % b == 0)
        return 1;
    return 0;
}
void check2(int a, int b)
{
    scanf("%d%d", &a, &b);
    if (a == 0 || b == 0)
        printf("sai");
    if (a % b == 0)
        printf("a chia het chia het cho b");
    else
        printf("a k chia het chia het cho b");
}
void check3()
{
    int a, b;
    scanf("%d%d", &a, &b);
    if (a == 0 || b == 0)
        printf("sai");
    if (a % b == 0)
        printf("a chia het chia het cho b");
    else
        printf("a k chia het chia het cho b");
}
int main()
{
    int c = check1();
    if (c == 1)
    {
        printf("a chia het cho b");
    }
    else
    {
        printf("a k chia het cho b");
    }
}