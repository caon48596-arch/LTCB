#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int a[n];
    int b[n];

    printf("Nhap 10 so nguyen:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        b[i] = a[i];
    }
    for (int i = 0; i < n; i++)
    {
        int max = i;
        for (int j = i + 1; j < n; j++)
        {
            if (b[i] < b[j])
            {
                max = j;
            }

            int temp = b[max];
            b[max] = b[i];
            b[i] = temp;
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }
}