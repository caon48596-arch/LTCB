#include <stdio.h>
#include <math.h>
void nhap(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}
void xuat(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {

        sum += a[i];
    }
    printf("%d", sum);
}

int main()
{
    int n;
    int i;
    scanf("%d", &n);
    int a[n];
    nhap(a, n);
    xuat(a, n);
}