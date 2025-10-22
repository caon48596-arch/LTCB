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

    int b[n];
    int c;
    int vitri;
    int legth = 0;
    scanf("%d", &c);
    for (int i = n; i > 0; i--)
    {
        if (c > a[i - 1])
        {
            vitri = i;
            break;
        }
    }
    for (int i = n; i > vitri; i--)
    {
        a[i] = a[i - 1];
    }
    a[vitri] = c;
    for (int i = 0; i <= n; i++)
    {
        int max = i;
        for (int j = i + 1; j <= n; j++)
        {
            if (a[i] < a[j])
            {
                max = j;
            }

            int temp = a[max];
            a[max] = a[i];
            a[i] = temp;
        }
    }

    for (int i = 0; i <= n; i++)
    {
        b[i] = a[i];
        printf("%d ", b[i]);
    }
}
