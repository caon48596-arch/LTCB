#include <stdio.h>
#include <math.h>

// int s(int x, int n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }
//     else
//     {
//         return x * s(x, n - 1);
//     }
// }
void s1(int x, int n, int sum)
{
    if (n == 0)
    {
        printf("%d", sum);
        return;
    }
    else
    {
        s1(x, n - 1, sum * x);
    }
}
int main()
{
    int x, n;
    scanf("%d%d", &x, &n);
    int sum = 1;
    s1(x, n, sum);
}
