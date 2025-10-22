#include <math.h>
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum++;
        }
    }
    printf(" so uoc so la ");
    printf("%d ", sum);
    printf("\n");
    printf("tim ucln");
    printf("nhap 1 so ");
    int a, b;
    scanf("%d%d", &a, &b);
    int a1, b1;
    a1 = a;
    b1 = b;
    int ucln;
    int max;
    if (a1 > b1)
    {
        max = a1;
    }
    else
    {
        max = b1;
    }

    for (int i = max; i > 1; i--)
    {
        if (a1 % i == 0)
        {
            if (b1 % i == 0)
            {
                ucln = i;
                break;
            }
        }
    }
    printf("ucln %d", ucln);
    printf("\n");
    int c, d, c1, d1;
    scanf("%d %d", &c, &d);
    int bcnn;
    int max2;
    c1 = c;
    d1 = d;
    if (c1 > d1)
    {
        max2 = c1;
    }
    else
    {
        max2 = d1;
    }

    if (max2 % d1 == 0 && max2 % c1 == 0)
    {
        printf("bcnn %d", max2);
    }
    else
    {
        printf("k co bncc");
    }
}
