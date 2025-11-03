#include <stdio.h>
#include <math.h>

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
    return pow(n, 2) + s2(n - 1);
}
void s3(int n, int sum)
{
    if (n == 0)
    {
        printf("%d", sum);
        return;
    }
    else
    {

        sum += pow(n, 2);
        s3(n - 1, sum);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    s3(n, sum);
    return 0;
}
