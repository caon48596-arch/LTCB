#include <math.h>
#include <stdio.h>

int main()
{
    printf("nhap 1 so ");
    int n;
    scanf("%d", &n);
    int sum = 1;
    for (int i = 1; i <= n; i++)
    {
        sum *= i;
    }
    printf("%d ", sum);
}
