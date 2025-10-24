#include <stdio.h>
int UCLN(int a, int b)
{
    int a1 = a;
    int b1 = b;
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
    return ucln;
}
int BCNN(int c, int d)
{
    int max2;
    int g = UCLN(c, d);
    return (c / g) * d;
    if (max2 % d == 0 && max2 % c == 0)
        printf("bcnn %d", max2);
    else
        printf("k co bncc");
}

int main()
{
    int a, b;
    int i, c, d;
    scanf("%d%d", &a, &b);
    i = UCLN(a, b);
    if (i == 0)
    {
        printf("k co");
    }
    else
    {
        printf("ucln la %d", i);
    }
    printf("\n");
    scanf("%d %d", &c, &d);

    int j = BCNN(c, d);
    printf("bcnn la %d", j);
}