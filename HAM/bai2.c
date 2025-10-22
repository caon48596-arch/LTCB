#include <stdio.h>
#include <math.h>

int nguyento(int n)
{
    if (n < 2)
    {
        return 0;
    }
    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            return 0;
        }
        return 1;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int kq = nguyento(n);
    printf("%d\n", kq);
    return 0;
}