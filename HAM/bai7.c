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
int UCLN1(int a, int b)
{
    scanf("%d", &a);
    scanf("%d", &b);
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
void UCLN2(int a, int b)
{
    int a1 = a;
    int b1 = b;
    int max;
    if (a1 > b1)
    {
        max = a1;
    }
    else
    {
        max = b1;
    }
    int ucln = 1;
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
    if (ucln == 1)
    {
        printf("sai");
    }
    else
    {
        printf("%d la ucln", ucln);
    }
}
void UCLN3()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int a1 = a;
    int b1 = b;
    int max;
    if (a1 > b1)
    {
        max = a1;
    }
    else
    {
        max = b1;
    }
    int ucln = 1;
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
    if (ucln == 1)
    {
        printf("sai");
    }
    else
    {
        printf("%d la ucln", ucln);
    }
}
int main()
{
    // int a, b;
    // int i;
    // scanf("%d%d", &a, &b);
    UCLN3();
    // if (c == 0)
    // {
    //     printf("k co");
    // }
    // else
    // {
    //     printf("ucln la %d", c);
    // }
}
