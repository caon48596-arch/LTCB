#include <stdio.h>
int main()
{
    printf("tu 100 toi 5 ");
    for (int i = 100; i >= 5; i--)
    {
        printf("%d ", i);
    }
    printf("\n");
    printf("so chan tu 0-100 ");
    for (int i = 0; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    printf("nhap n ");
    int n;
    scanf("%d", &n);
    if (n < 10)
    {
        printf("yeu cau nhap lai ");
    }
    else
    {
        for (int i = 10; i <= n; i++)
        {
            printf("%d ", i);
        }
    }
    return 0;
}
