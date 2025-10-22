#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int m;
    scanf("%d", &m);
    int a[n][m];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i] == a[j])
            {
                printf("0 ");
            }
            else
            {
                printf("1 ");
            }
        }
        printf("\n");
    }
}