#include <math.h>
#include <stdio.h>
int main()
{
    printf("nhap 1 so ");
    int n;
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
    {
        int nguyento = 1;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                nguyento = 0;
            }
        }
        printf("so nguyen to la ");
        if (nguyento)
        {
            printf("%d ", i);
        }
    }
    return 0;
}
