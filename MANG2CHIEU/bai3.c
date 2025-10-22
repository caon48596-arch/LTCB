#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int m;
    scanf("%d", &m);
    int a[n][m];
    int sum = 0;
    int sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            a[i][j] = sum++;
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j)
            {
                sum2 += a[i][j];
            }
        }
    }
    printf("%d", sum2);
}