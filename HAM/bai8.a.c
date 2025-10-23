#include <stdio.h>
#include <stdbool.h>
int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
        return 1;
    return n + sum(n - 1);
}
void s(int n, int *sum)
{
    sum = 0;
    if (n == 0)
    {
        sum = 0;
    }
    if (n == 1)
    {
        sum = 1;
    }
    if (n > 1)
    {
        s(n, &sum);
        *sum = *sum + n;
    }
    printf("%d ", sum);
}
int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    s(n, &sum);
}