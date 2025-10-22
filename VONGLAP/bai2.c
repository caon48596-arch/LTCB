#include <stdio.h>
int main()
{
    printf("cac so chia het cho 3 la ");
    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");

    printf("cac so chia het cho 2 va 5 la ");
    for (int i = 100; i <= 200; i++)
    {
        if (i % 2 == 0 && i % 5 == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");

    printf("tinh tong tu 20 - 50 la ");
    int sum = 0;
    for (int i = 20; i <= 50; i++)
    {
        sum = sum + i;
    }
    printf("%d ", sum);
    printf("\n");
    printf("tinh tong tu a toi b ");
    int a, b; scanf("%d%d", &a ,&b);
    int sum1 = 0;
    if (a > b)
    {
        printf("yeu cau nhap lai ");
    }
    else
    {
        for (int i = a; i <= b; i++)
        {
            sum1 = sum1 + i;
        }
        printf("%d ", sum1);
    }
    return 0;
}
