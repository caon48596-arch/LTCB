#include <math.h>
#include <stdio.h>

int main()
{
    printf("nhap sl cac so ");
    int n;scanf("%d", &n);
    int sum = 0;
    for (int i = 2; i <= n; i++)
    {
            int nguyento = 0;

        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                nguyento = 1;
                break;
            }
        }
        if (nguyento == 0)
        {
            sum += i;
        }
    }
    printf("tong la %d", sum);
}
