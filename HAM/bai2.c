#include <stdio.h>
#include <math.h>

int nguyento(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int nguyento1()
{
    int n;
    scanf("%d", &n);
    if (n < 2)
        return 0;
    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

void nguyento2(int n)
{
    scanf("%d", &n);
    if (n < 2)
        printf("k phai");
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("k phai");
            return;
        }
    }
    printf("la so nt");
}
void nguyento3()
{
    int n;
    scanf("%d", &n);
    if (n < 2)
        printf("k phai");
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("k phai");
            return;
        }
    }
    printf("la so nt");
}
int main()
{
    int n;
    // scanf("%d", &n);
    int kq = nguyento1(n);

    if (kq == 1)
    {
        printf("la so nt");
    }
    else
    {
        printf("k la so");
    }
    return 0;
}
