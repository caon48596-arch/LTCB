#include <stdio.h>
#include <math.h>

int count1(int n)
{
    if (n < 10)
    {
        return 1;
    }
    else
    {
        return 1 + count1(n / 10);
    }
}
void count(int n, int x)
{
    if (n < 10)
    {
        printf("%d", x);
        return;
    }
    else
    {
        x = x + 1;
        count(n / 10, x);
    }
}

int main()
{
    int n, x = 1;
    scanf("%d", &n);
    count(n, x);
}
