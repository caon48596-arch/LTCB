#include <stdio.h>

void s(int n, int sum)
{
    if (n <= 0)
    {
        printf("%d ", sum);
        return;
    }
    sum += n;
    s(n - 1, sum);
}
int s1(int n, int sum)
{
    if (n < 0)
    {
        return 0;
    }
    if (n >= 1)
    {
        sum += n;
        return s1((n - 1), sum);
    }
}
int s2(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return n + s2(n - 1);
}

int main(void)
{
    int n;
    scanf("%d", &n);
    int sum;
    int c = s2(n);
    printf("%d", c);
    return 0;
}