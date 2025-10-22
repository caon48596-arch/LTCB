#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    printf(" nhap cac phan tu");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        printf("%d ", a[i]);
    }
    printf("tim so chan va tinh tong\n");
    int sum = 0;
    int sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("%d", a[i]);
            sum += a[i];
        }
        else
        {
            sum2++;
        }
    }
    printf("tong cac so chan la %d\n", sum);
    printf("cac so le la %d", sum2);
}