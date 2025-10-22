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
    int sum3 = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            a[i][j] = sum++;
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("tong cac hang ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum2 += a[i][j];
            if (j + 1 == m)
            {
                break;
            }
        }
        printf("%d ", sum2);
        sum2 = 0;
    }
    printf("\n");
    printf("tong cac cot ");
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            sum3 += a[i][j];
            if (i + 1 == n)
            {
                break;
            }
        }
        printf("%d ", sum3);
        sum3 = 0;
    }
}
