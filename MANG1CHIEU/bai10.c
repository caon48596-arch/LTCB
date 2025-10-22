#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);
    int a[n];
    int b[m];
    int c[n + m];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }
    int a1 = 0;
    int b1 = 0;
    for (int i = 0; i < n + m; i++)
    {
        if (a[a1] < b[b1])
        {
            c[i] = a[a1];
            a1++;
        }
        else
        {
            c[i] = b[b1];
            b1++;
        }
    }
    for (int i = 0; i < n + m; i++)
    {
        printf("%d ", c[i]);
    }
}
