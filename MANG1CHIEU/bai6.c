#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int b[n];
    printf("nhap cac phan tu ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        b[i] = a[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
}
