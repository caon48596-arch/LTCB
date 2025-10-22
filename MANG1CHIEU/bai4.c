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
    int max = a[0];
    int vitri = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            vitri = i;
        }
    }
    printf("so lon nhat la %d vvi tri %d", max, vitri + 1);
}