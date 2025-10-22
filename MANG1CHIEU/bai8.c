#include <stdio.h>

int main()
{
    int a[10];
    int b[10];

    printf("Nhap 10 so nguyen:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        b[i] = a[i];
    }
    printf("cac so chan ");
    for (int i = 0; i < 10; i++)
    {
        if (b[i] % 2 == 0)
        {
            printf("%d ", b[i]);
        }
    }
    printf("cac so le ");

    for (int i = 0; i < 10; i++)
    {
        if (b[i] % 2 != 0)

        {
            printf("%d ", b[i]);
        }
    }
}
